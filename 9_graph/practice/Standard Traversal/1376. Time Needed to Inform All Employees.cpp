class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int maxTime = INT_MIN;
        std::vector<int> vis(n, 0), adj[n];
        for(int node = 0; node < n; node++) {
            if(manager[node] == -1) continue;
            // undirected graph
            adj[node].push_back(manager[node]);
            adj[manager[node]].push_back(node);
        }
        vis[headID] = 1;
        std::queue<std::pair<int, int>> bfs;
        bfs.push({headID, informTime[headID]});
        while(!bfs.empty()) {
            auto [node, time] = bfs.front();
            bfs.pop();
            maxTime = std::max(maxTime, time);
            for(auto& child:adj[node]) {
                if(!vis[child]) {
                    vis[child] = 1;
                    bfs.push({child, time + informTime[child]});
                }
            }
        }
        return maxTime;
    }
};