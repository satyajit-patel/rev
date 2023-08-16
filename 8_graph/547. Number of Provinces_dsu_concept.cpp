class DSU {
public:
    std::vector<int> parent, size;

    DSU(int n) {
        for(int i=0; i<=n; i++) {
            parent.push_back(i);
            size.push_back(1);
        }
    }

    int getParent(int node) {
        if(parent[node] == node) return node;
        return parent[node] = getParent(parent[node]);
    }

    void unionS(int u, int v) {
        int nu = getParent(u);
        int nv = getParent(v);
        if(nu == nv) return;
        if(size[nu] < size[nv]) {
            parent[nu] = nv;
            size[nv] += size[nu];
        }
        else {
            parent[nv] = nu;
            size[nu] += size[nv];
        }
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int m = isConnected[0].size();
        DSU* dsu = new DSU(n+5);
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int flag = isConnected[i][j];
                if(flag) {
                    int u = i + 1;
                    int v = j + 1;
                    if(dsu->getParent(u) != dsu->getParent(v)) dsu->unionS(u, v);
                }
            }
        }
        int cc = 0;
        for(int node=1; node<=n; node++) {
            if(dsu->getParent(node) == node) cc += 1;
        }
        return cc;
    }
};