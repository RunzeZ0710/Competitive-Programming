#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <tuple>
#include <numeric>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	vector<pair<int, int>> query = {};
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int a,b; cin >> a >> b;
		query.push_back(make_pair(a, b));
	}
	sort(query.begin(), query.end());
	vector<int> arr = {};
	vector<int> pos = {};
	for(int i = 0; i < n; i++){
		auto index1 = lower_bound(pos.begin(), pos.end(), query[i].first) - pos.begin();
		pos.insert(pos.begin() + index1, query[i].first);
		arr.insert(arr.begin() + index1, 1);
		auto index2 = lower_bound(pos.begin(), pos.end(), query[i].second) - pos.begin();
		pos.insert(pos.begin() +index2, query[i].second);
		arr.insert(arr.begin()+index2, -1);
	}
	int prefix[2*n + 1] = {0};
	int ans = 0;
	for(int i = 1; i <= 2*n; i++){
		prefix[i] = prefix[i-1] + arr[i-1];
		ans = max(prefix[i], ans);
	}
	cout << ans;
}
