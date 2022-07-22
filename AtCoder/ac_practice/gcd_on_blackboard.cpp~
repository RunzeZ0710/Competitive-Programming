#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <tuple>
#include <numeric>
#include <cstdio>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int forwards[n+1];
	int backwards[n+1];
	forwards[0] = 0;
	backwards[n] = 0;
	for(int i = 1; i <= n; i++){
		forwards[i] = __gcd(arr[i-1], forwards[i-1]);
	}
	for(int i = n-1; i >= 0; i--){
		backwards[i] = __gcd(backwards[i+1], arr[i]);
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(ans, __gcd(forwards[i], backwards[i+1]));
	}
	cout << ans; 
}
