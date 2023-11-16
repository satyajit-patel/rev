class Solution {
public:
    long long dfs(int node, int parent, vector<int> adj[], vector<int>& values) {
        // base case
        if(adj[node].size() == 1 && node != 0) { // i.e it's a leaf node
            return (long long)values[node];
        }

        // transition
        long long sum = 0;
        for(auto& child: adj[node]) {
            if(child == parent) {
                continue;
            }
            sum = sum + dfs(child, node, adj, values);
        }
        return min(sum, (long long)values[node]);
    }

    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        /*
            values[5, 2, 5, 2, 1, 1]

            0
            (sum = sum + f(child)) i.e (0 = 0 + {2 + 1 + 2})
            return min(5, 5)

            1(leaf_node)      3(leaf_node)
            return 2          return 2

            2
            (sum = sum + f(child)) i.e (0 = 0 + 1)
            return min(1, 5)

            4
            (sum = sum + f(child)) i.e (0 = 0 + 1)
            return min(1, 1)

            5(leaf_node)
            return 1
        */
        int n = values.size();
        vector<int> adj[n];
        for(auto& row: edges) {
            int u = row[0];
            int v = row[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        long long sumOfLeafNodes = dfs(0, -1, adj, values);
        long long totSum = 0;
        for(auto& it: values) {
            totSum += it;
        }
        long long ans = totSum - sumOfLeafNodes;
        return ans;
    }
};