#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <tuple>
#include <cstdio>
using namespace std;
using ll = long long;

int n; 
int ans[500] = {0};
bool visited[500] = {false};
vector<int> arr[500];
vector<int> cur = {0};
bool valid = true;
int loc = 0;

void calc(int x){
	if(find(cur.begin(), cur.end(), x) != cur.end()) valid = false;
	else cur[loc] = x;
	dfs(loc+1);
	return;
}

void dfs(int x){
	if(x == n){
		if(!valid) return;
		for(int i = 0; i < n; i++){
			ans[i] = max(ans[i], cur[i]);	
		}
	}
	for(auto u : arr[x]){
		calc(u);
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	int index = 0; 
	while(index < n){
		bool valid = true;
		for(int i = 0; i < n; i++){
			int a; cin >> a;
			if(valid) arr[index].push_back(a);
			if(a == index+1) valid = false;
		}
		index++;
	}
}
