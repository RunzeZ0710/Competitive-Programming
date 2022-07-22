#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <tuple>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <numeric>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int arr[n+1] = {0};
		set<int> distinct;
		map<int, long long> sums;
		for(int i = 1; i <= n; i++) arr[i] = ((int)s[i-1] - 48 + arr[i-1]);
		for(int i = 0; i <=n; i++){
			distinct.insert(i-arr[i]);
			arr[i] = i - arr[i];
			sums[arr[i]]++;
		}	
		long long ans = 0;
		for(int i : distinct){
			if(sums[i]>1){
				ans += (sums[i] * (sums[i] - 1))/2;
			}
		}
		cout << ans << endl;
	}
}
