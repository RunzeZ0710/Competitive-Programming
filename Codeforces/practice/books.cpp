#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <numeric>
#include <tuple>
#include <cmath>
#include <iostream>
using namespace std;
using ll = long long;

int n, t;
vector<int> prefix = {0};
vector<int> arr = {};

void seq(int x){
	if(x == n + 1) return;
	prefix.emplace_back(prefix[x-1] + arr[x-1]);
	seq(x+1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> t;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		arr.emplace_back(a);
	}
	seq(1);
	// for(int i : prefix) cout << i << " ";
	int ans = 0;
	int lb = 0;
	for(int i = 1; i <= n; i++){
		if(prefix[i] - prefix[lb] > t) lb++;
		ans = max(ans, i - lb);
	}
	cout << ans;
}