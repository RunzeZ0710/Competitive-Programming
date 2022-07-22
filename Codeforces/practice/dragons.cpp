#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <numeric>
#include <string>
#include <tuple>
#include <cmath>
using namespace std;

int main(){
    int s, n; cin >> s >> n;
    vector<pair<int, int>> dragon = {};
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b; 
        dragon.emplace_back(make_pair(a, b));
    }
    sort(dragon.begin(), dragon.end());
    bool win = true;
    for(int i = 0; i < n; i++){
        if(s > dragon[i].first) s += dragon[i].second;
        else{
            win = false;
            break;
        }
    }
    if(win) cout << "YES";
    else cout << "NO";
}