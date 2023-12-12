class Solution {
public:
    /*
        euler path : stright line i.e ist and last node has only 1 degree
        and between nodes are 2 degree each
    */

	int isEulerCircuit(int V, vector<int>adj[]) {
	    vector<int> degree(V, 0);
	    for(int node=0; node<V; node++) {
	        for(auto& child: adj[node]) {
	            degree[child]++;
	        }
	    }
	    int one = 0;
	    int two = 0;
	    int zero = 0;
	    for(int node=0; node<V; node++) {
	        if(degree[node] == 0) {
	            zero++;
	        }
	        else if(degree[node] == 1) {
	            one++;
	        }
	        else if(degree[node] == 2) {
	            two++;
	        }
	    }
	    if(two+zero == V) {
	        return 2;
	    }
	    if((one == 2) && (two+zero == V-2)) {
	        return 1;
	    }
	    return 0;
	}
};