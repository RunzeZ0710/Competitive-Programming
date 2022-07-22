#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <tuple>
#include <vector>
#include <cstdio>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n+1] = {0};
		int mxn = 0;
		int counter = 0;
		for(int i = 1; i <= n; i++){
			int a; cin >> a;
			mxn = max(mxn, a);
			arr[i] = arr[i-1] + a;
			if(arr[i] == arr[i-1]) ++counter;
		}
		if(counter >= n-1) {cout << 0 << endl; continue;}
		for(int i = mxn; i <= arr[n]; i++){
			int steps = 0;
			int lb = 0;
			bool valid = true;
			for(int j = 1; j < n+1; j++){
				if(j <= lb) continue;
				if(arr[j] - arr[lb] == i){
					for(int k = j+1; k <= n; k++) if(arr[k] == arr[k-1]) j++; else break;
					steps += j - lb - 1;
					lb = j;
					if(j == n) break;
				}else if(arr[j] - arr[lb] > i) {valid = false; break;}
				else if(arr[j] - arr[lb] < i && j == n) {valid = false; break;}
			}
			if(valid){cout << steps << endl; break;}
		}
	}
}
