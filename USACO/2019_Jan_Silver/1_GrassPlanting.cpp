#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <tuple>
using namespace std;
using ll = long long;

int n;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    cin >> n;
    vector<int> counter(n);
    for(int i = 0; i < n -1; i++){
        int a, b; cin >> a >> b;
        ++counter[a-1];
        ++counter[b-1];
    }
    cout << *max_element(counter.begin(), counter.end()) + 1;
}