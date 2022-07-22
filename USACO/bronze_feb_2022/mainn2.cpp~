#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <tuple>
#include <cstdio>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	vector<int> cur(n);
	vector<int> pos(n);
	for(int &i : cur) cin >> i;
	for(int &i : pos) cin >> i;
	int ans = 0;
	auto index = find(cur.begin(), cur.end(), pos[n-1]) - cur.begin();
	for(int i = n-2; i >= 0; i--){
		auto loc = find(cur.begin(), cur.end(), pos[i]) - cur.begin();
		if(loc > index) ans++;
		else index = loc;
	}
	cout << ans;
}
