class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        std::map<int, set<int>> bAdj, rAdj;
        for(int node=0; node<blueEdges.size(); node++) {
            int u = blueEdges[node][0];
            int v = blueEdges[node][1];
            bAdj[u].insert(v);
        }
        for(int node=0; node<redEdges.size(); node++) {
            int u = redEdges[node][0];
            int v = redEdges[node][1];
            rAdj[u].insert(v);
        }

        // shortest path with dist
        std::vector<std::pair<int, int>> dist(n, {INT_MAX, INT_MAX});
        dist[0] = {0, 0}; // dist of blue and red edge
        std::queue<std::pair<std::pair<int, int>, int>> q;
        q.push({{0, 0}, 0}); // 0 -> blue edge
        q.push({{0, 1}, 0}); // 1 -> red edge
        while(!q.empty()) {
            auto [it, cost] = q.front();
            auto [node, edge] = it;
            q.pop();
            if(edge == 0) { // if blue edge then next check for red edge
                for(auto& child:rAdj[node]) {
                    int newCost = cost+1;
                    if(newCost < dist[child].second) {
                        q.push({{child, 1}, newCost});
                        dist[child].second = newCost;
                    }
                }
            }
            else { // red edge
                for(auto& child:bAdj[node]) { 
                    int newCost = cost+1;
                    if(newCost < dist[child].first) {
                        q.push({{child, 0}, newCost});
                        dist[child].first = newCost;
                    }
                }
            }
        }

        // choose small dist from comparing both path
        std::vector<int> ans(n, -1);
        for(int node=0; node<n; node++) {
            int mini = std::min(dist[node].first, dist[node].second);
            if(mini != INT_MAX) ans[node] = mini;
        }
        return ans;
    }
};