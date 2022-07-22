#include <cstdio>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <tuple>
#include <numeric>
#include <cmath>
#include <string>
using namespace std;
using ll = long long;

int ans(long long x, long long y){
    long long num = x;
    int digit = 0;
    long long counter = 0;
    
    while(y--){
        x = num;
        int mxn = 0, mini = 0;
        while(x > 0){
            digit = x % 10;
            x /= 10;
            mxn = max(mxn, digit);
            mini = min(mini, digit);
        }
        num = num + mxn*mini;
        if(mini == 0) break;
    }
    return num;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        long long a, k; cin >> a >> k;
        cout << ans(a, k) << endl;
    }
}