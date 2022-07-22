#include <cstdio>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <cmath>
#include <numeric>
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
using ll = long long;

int first(long long x, long long y){
    if(x < y){long long k = x; x = y; y = k;}
    long long counter = x-y;
    if(counter > y) counter = y;
    return counter;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long t; cin >> t;
    while(t--){
        long long a,b; cin >> a >> b;
        long long ans = 0;
        ans += first(a, b);
        if(a > b) {a -= ans*2; b -= ans;}
        else {b -= 2*ans; a -= ans;}
        ans += 2*(min(a/3, b/3));
        a -= 3*(a/3); b -= 3*(b/3);
		if( (a == 2 && b == 2) || (a == 2 && b == 1) || (a == 1 && b ==2) ) ans++;
		cout << ans << endl;
    }
}