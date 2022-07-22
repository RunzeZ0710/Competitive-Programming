#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <cstdio>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("balancing.in", "r", stdin);
	//freopen("balancing.out", "w", stdout);
	int n; cin >> n;
	set<int> vfence, hfence;
	vector<pair<int, int>> coordinates = {};
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		coordinates.push_back(make_pair(x, y));
		vfence.insert(x + 1);
		hfence.insert(y + 1);
	}
	
	int ans = 999999999;
	sort(coordinates.begin(), coordinates.end());
	for(auto i = hfence.begin(); i != hfence.end(); i++){
		int vertical = coordinates[0].first;
		int horizontal = *i;
		int q1 = 0; int q2 = 0; int q3 = 0; int q4 = 0;
		for(int j = 0; j < n; j++){
			if(coordinates[j].second > horizontal) ++q1;
			
		}
		ans = min(ans, max({q1, q2, q3, q4}));
		for(int j = 0; j < n; j++){
			if(coordinates[j].second > horizontal){
				++q2;
				--q1;
			}
			else{
				++q3;
				--q4;
			}
		}
		ans = min(ans, max({q1, q2, q3, q4}));
	}
	cout << ans;
}
