#include <cstdio>
#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x; 
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(a % 2) odd++;
            else even++;
        }
        if(!odd) {cout << "NO" << endl; continue;}
        if(!odd%2) odd--;
        if(odd + even >= x) cout << "YES" << endl;
    }
}