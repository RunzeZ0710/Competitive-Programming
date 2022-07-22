#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <tuple>
#include <iostream>
#include <string>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    cin >> n;
    vector<int> cows = {};
    int adj = 0;
    bool done = false;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(find(cows.begin(), cows.end(), a) == cows.end()) {cows.push_back(a); ++adj;}
        else{
            auto index = find(cows.begin(), cows.end(), a) - cows.begin();
            if(a != cows[cows.size() - 1] && a != cows[cows.size() - 2]) {cout << abs(index - adj) - 1; done = true;}
        }
    }
    if(!done){
        int bessie;
        vector<int> sorted;
        sorted = cows;
        sort(sorted.begin(), sorted.end());
        // for(int i : sorted) cout << i << " ";
        // cout << endl;
        // for(int i : cows) cout << i << " ";
        // cout << endl;
        bool found = false;
        int ans;
        for(int i = 0; i < n; i++){
            auto index = find(cows.begin(), cows.end(), sorted[i]) - cows.begin();
            auto index2 = find(sorted.begin(), sorted.end(), sorted[i]) - sorted.begin();
            if(abs(index - index2) > 1) {bessie = sorted[i]; found = true; ans = abs(index - index2);}
        }
        if(!found){
            cout << 1;
        }
        else{
            cout << ans;
        }
    } 
}