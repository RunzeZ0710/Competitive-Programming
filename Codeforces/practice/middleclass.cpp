#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
#include <set>
#include <map>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long x; cin >> x;
		long long arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		long long ans = 0;
		long long sum = 0;
		sort(arr, arr+n);
		long long counter = 0;
		int loc1 = n-1;
		// int loc2 = 0;
		while(true){
			++counter;
			sum += arr[loc1]; loc1--;
			// else {sum += arr[loc2]; loc2++;}
			// cout << sum << " ";
			double average = (double)sum/(double)counter;
			// cout << average << " ";
			if(average >= x) ans = max(ans, counter);
			// cout << sum << endl;
			if(counter == n) break;
		}
		cout << ans << endl;
		// cout << endl;
	}
}