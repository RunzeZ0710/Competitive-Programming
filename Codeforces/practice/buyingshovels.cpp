#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <tuple>
#include <numeric>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        long long n, k; cin >> n >> k;
        if(k > n) {cout << 1 << endl; continue;}
        if(k > sqrt(n)) k == n;
        for(long long i = k; i > 0; i--){
            if(!(n%i)) {cout << n/i << endl; break;}
        }
    }
}