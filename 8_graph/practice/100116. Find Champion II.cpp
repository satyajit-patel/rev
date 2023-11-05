class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(auto& row: edges) {
            int u = row[0];
            int v = row[1];
            adj[u].push_back(v);
        }
        
        vector<int> indegree(n, 0);
        for(int node=0; node<n; node++) {
            for(auto& child: adj[node]) {
                indegree[child]++;
            }
        }
        
        int winner_team = -1;
        int num_team = 0;
        for(int node=0; node<n; node++) {
            if(indegree[node] == 0) {
                num_team++;
                winner_team = node;
            }
            if(num_team > 1) {
                return -1;
            }
        }
        return winner_team;
    }
};