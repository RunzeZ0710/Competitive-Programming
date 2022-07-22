#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	unordered_map<int, int> loc;
	int arr[n], pos[n];
	for(int i = 0; i < n; i++) {cin >> arr[i]; loc[arr[i]] = i;}
	for(int i = 0; i < n; i++) cin >> pos[i];
	int index = loc[pos[n-1]];
	int ans = 0;
	for(int i = n-2; i >= 0; i--){
		int temp = loc[pos[i]];
		if(temp > index) ans++;
		else index = temp;
	}
	cout << ans;
}
