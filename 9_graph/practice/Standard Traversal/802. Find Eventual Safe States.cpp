class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& g) {
        int n = g.size();
        std::map<int, std::set<int>> revAdj;
        std::vector<int> indegree(n, 0);
        for(int node=0; node<n; node++) {
            // node -> it
            // it -> node
            for(auto& it:g[node]) {
                revAdj[it].insert(node);
                indegree[node]++;
            }
        }

        // bfs
        std::queue<int> q;
        for(int node=0; node<n; node++) {
            if(indegree[node] == 0) q.push(node);
        }
        std::vector<int> toposort;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            toposort.push_back(node);
            for(auto& child:revAdj[node]) {
                indegree[child]--;
                if(indegree[child] == 0) q.push(child);
            }
        }

        std::sort(toposort.begin(), toposort.end());
        return toposort;
    }
};