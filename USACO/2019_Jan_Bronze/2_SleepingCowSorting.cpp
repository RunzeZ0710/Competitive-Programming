#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <tuple>
#include <string>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);
    int n; cin >> n;
    vector<int> cows(n);
    for(int & i : cows) cin >> i;
    int prev = cows[0];
    int pos = 0;
    for(int i = 1; i < n; i++){
        if(cows[i] < prev) pos = i;
        prev = cows[i];
    }
    cout << pos;
}