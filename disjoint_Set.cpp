#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
    vector<int> parent, size;

public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUparent(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUparent(parent[node]); 
    }

    void unionbySize(int u, int v) {
        int ulp_u = findUparent(u);
        int ulp_v = findUparent(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v]) {
            size[ulp_v] += size[ulp_u];
            parent[ulp_u] = ulp_v;
        } else {
            size[ulp_u] += size[ulp_v];
            parent[ulp_v] = ulp_u;
        }
    }
};

int main() {
    DisjointSet ds(7);
    ds.unionbySize(1, 2);
    ds.unionbySize(2, 3);
    ds.unionbySize(4, 5);
    ds.unionbySize(6, 7);
    ds.unionbySize(5, 6);

    int a = ds.findUparent(3) == ds.findUparent(7);
    cout << a<<endl;  
    ds.unionbySize(3,7);
    a = ds.findUparent(3) == ds.findUparent(7);
    cout<<a;
    return 0;
}
