#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <cstdio>
#include <numeric>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("lazy.in", "r", stdin);
	freopen("lazy.out", "w", stdout);
	int n, x;
	cin >> n >> x;
	int arr[n][n+1] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= n; j++){
			int a; cin >> a;
			arr[i][j] = arr[i][j-1] + a;
		}
	}
	long long ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= n; j++){
			pair<int, int> loc = {i, j};
			long long sum = 0;
			int lb = loc.second;
		   	int	rb = loc.second;
			loc.first = max(loc.first -x, 0);
			while(loc.first <= i){
				sum += arr[loc.first][rb] - arr[loc.first][lb-1];
				if(lb > 1) lb--;
				if(rb < n) rb++;
				loc.first++;
			}
			loc.first = min(n-1, i +x);
			lb = loc.second; rb = loc.second;
			while(loc.first > i){
				sum += arr[loc.first][rb] - arr[loc.first][lb-1];
				if(lb > 1) lb--;
				if(rb < n) rb++;
				loc.first--;
			}	
			ans = max(ans, sum);
		}
	}
	cout << ans;
}
