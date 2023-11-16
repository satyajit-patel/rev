class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        std::unordered_map<int, std::unordered_set<int>> adj;
        std::vector<bool> vis(n, false);
        for(int node=0; node<n; node++) {
            int u = node;
            for(auto& it:rooms[node]) {
                int v =  it;
                adj[u].insert(v);
            }
        }

        // bfs
        std::queue<int> q;
        q.push(0);
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            vis[node] = 1;
            for(auto& child:adj[node]) {
                if(!vis[child]) q.push(child);
            }
        }

        // if any room is not reachable return false
        for(int room=0; room<n; room++) {
            if(!vis[room]) return false;
        }
        return true;
    }
};