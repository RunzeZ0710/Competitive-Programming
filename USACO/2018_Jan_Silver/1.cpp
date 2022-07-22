#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <tuple>
#include <cmath>
#include <vector>
#include <cstdio>
#include <numeric>
using namespace std;
using ll = long long;

struct Query{
	int time;
	int cow;
	bool isStartTime;
};

bool cmp(const Query& a, const Query& b){
	return a.time < b.time;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);
	int n; cin >> n;
	vector<Query> arr;
	for(int i = 0; i < n; i++){
		int a, b; cin >> a >> b;
		arr.push_back({a, i, 1});
		arr.push_back({b, i, 0});
	}
	sort(arr.begin(), arr.end(), cmp);
	int total_time = 0;
	int cow_time[n] = {0};
	int cur_time = 0;
	int prev_time = 0;
	set<int> active;
	for(auto i : arr){
		cur_time = i.time;
		if(active.size() > 0) total_time += cur_time - prev_time;
		if(active.size() == 1){
			cow_time[*active.begin()] += cur_time - prev_time;	
		}
		if(i.isStartTime) active.insert(i.cow);
		else active.erase(i.cow);
		prev_time = cur_time;
	}
	int mini = 1e9;
	for(int i = 0; i < n; i++){
		mini = min(mini, cow_time[i]);
	}
	cout << total_time - mini;
}
