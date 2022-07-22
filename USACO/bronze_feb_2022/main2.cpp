#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <numeric>
#include <set>
#include <map>
#include <cstdio>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); 
	int n; cin >> n;
	int cur[n], pos[n];
	map<int, int> loc;
	for(int i = 0; i < n; i++) cin >> cur[i];
	for(int i = 0; i < n; i++){
		cin >> pos[i];
		loc[pos[i]] = i;
	}
	int dist[n] = {0};
	int ans =0;
	for(int i = 0; i < n; i++){
		dist[i] = i - loc[cur[i]];
	}
	for(int i = n-1; i >= 0; i--){
		if(dist[i] > 0){
			ans++;
			for(int j = i-1; j >= i - dist[i]; j--){
				if(dist[j] <= 0) dist[j]++;
			}
		}
	}
	cout << ans;
}
