#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <numeric>
#include <tuple>
#include <vector>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("paintbarn.in", "r", stdin);
	freopen("paintbarn.out", "w", stdout);
	int n, k; cin >> n >> k;
	int arr[1001][1001] = {0};
	for(int i = 0; i < n; i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		arr[x1][y1]++;
		arr[x2][y2]++;
		arr[x2][y1]--;
		arr[x1][y2]--;
	}
	int ans = 0;
	for(int i = 0; i < 1001; i++){
		for(int j = 0; j < 1001; j++){
			if(j >0) arr[i][j] += arr[i][j-1];
			if(i > 0) arr[i][j] += arr[i-1][j];
			if(j>0&&i>0) arr[i][j] -= arr[i-1][j-1];
			if(arr[i][j] == k) ans++;
		}
	}
	cout << ans;
}
