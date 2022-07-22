#include <cstdio>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <iostream>
#include <tuple>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long mini = n;
        vector<long long> factors = {};
        for(long long i = 1; i*i <= n; i++){
            if(!(n%i)) factor.emplace_back(i);
        }
        pair<long long, long long> ans {0, 0};
        for(int i = 0; i < factors.size(); i++){
            if(lcm(n-factor[i], factor[i]) < mini){
                mini = lcm(n-factor[i], factor[i]);
                ans.first = factor[i];
                ans.second = n-factor[i];
            }
        }
        cout << ans.first << " " << ans.second << endl;
    }
}