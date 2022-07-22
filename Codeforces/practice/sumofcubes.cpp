#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <numeric>
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
		bool valid = false;
        for(long long i = 1; i*i*i < n; i++){
            long long a = cbrt(n - i*i*i);
			if(a*a*a + i*i*i == n) {valid = true; break;}
        }
		if(valid) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
}