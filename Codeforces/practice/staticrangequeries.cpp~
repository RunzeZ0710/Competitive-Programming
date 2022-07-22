#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <tuple>
#include <numeric>
#include <algorithm>
#include <cstdio>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, q; cin >> n >> q;
	vector<tuple<ll, ll, long long>> arr = {};
	for(int i = 0; i < n; i++){
		ll l,r; cin >> l >> r;
	   	long long v; cin >> v;	
		arr.push_back(make_tuple(l, r, v));
	}
	sort(arr.begin(), arr.end());
	while(q--){
		ll l, r; cin >> l >> r;
		long long sum = 0;
		for(int i = 0; i < n; i++){
			ll a, b, c; tie(a, b, c) = arr[i];
			if(r > a){
				ll k = min(r, b) - max(l, a);
				k = max(k, (ll)0);
				sum += c*k;
			}	
			else if(r <= a) break;
		}	
		cout << sum << endl;
	}
}
