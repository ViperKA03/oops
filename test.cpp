#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long getMaxProfit(vector<int>& ind, vector<int>& prof, int k) {
    vector<pair<int, int>> f;
    for (int i = 0; i < ind.size(); i++)
        if ((ind[i] | k) == k) f.push_back({ind[i], prof[i]});
    sort(f.begin(), f.end());
    long maxProf = 0, curOr = 0;
    for (auto p : f) 
        if ((curOr | p.first) <= k) curOr |= p.first, maxProf += p.second;
    return maxProf;
}

int main() {
    vector<int> ind = {2,3,1,5,9}, prof = {1,2,6,1,5};
    int k = 3;
    cout << getMaxProfit(ind, prof, k);
    return 0;
}