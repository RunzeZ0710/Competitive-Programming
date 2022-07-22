#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <numeric>
#include <iostream>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long arr1[100000];
        long long mini = 1000000000;
        for(long long i = 0; i < n; i++) {cin >> arr1[i]; mini = min(mini, arr1[i]);}
		long long ans = 1000000000;
		long long num = 0;
        for(long long j = 0; j <= mini; j++){
			long long arr[100000];
			for(long long i = 0; i < n; i++) arr[i] = arr1[i];
			// cout << "new" << endl;
            bool valid=true;
            long long counter = 0;
            for(long long i=0; i < n; i++){
                if(i == n-1 && arr[i] != j) {valid = false; break;}
				else if(i == n-1 && arr[i] == j) {break;}
                long long change = arr[i] - j;
                arr[i] = j;
                arr[i+1] -= change;
				// cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
                if(arr[i+1] < j){valid = false; break;}
                counter += 2*change;
	
            }
        if(valid) {ans = min(ans, counter); num++;}
        }
	if(!num) cout << -1 << endl;
	else cout << ans << endl;
    }
}
