class Solution {
  public:
    int sumOfDependencies(vector<int> adj[], int V) {
        vector<int> indegree(V, 0);
        for(int node=0; node<V; node++) {
            for(auto& child: adj[node]) {
                indegree[child]++;
            }
        }
        int ans = 0;
        for(int i=0; i<V; i++) {
            ans += indegree[i];
        }
        return ans;
        
        /*
            // python code
            
            indegree = [0] * V
            for node in range(V):
                for child in adj[node]:
                    indegree[child] += 1
        
            ans = sum(indegree)
            return ans
        */
    }
};