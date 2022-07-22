#include <cstdio>
#include <algorithm>
#include <set>
#include <iostream>
#include <map>
#include <string>
#include <cmath>
#include <vector>
#include <numeric>
#include <tuple>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        int ans  = 0;
        int prev = n;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == 'R') {ans = max(ans, prev - i); prev = i;}
        }
        int ans = max(ans, prev+1);
        cout << ans << endl;
    }
}