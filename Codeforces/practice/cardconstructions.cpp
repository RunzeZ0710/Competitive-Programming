#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>
#include <map>
#include <set>
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
using ll = long long;

long long arr[30000];

long long search(long long a){
	int left = 0, right = 29999;
    int loc = 15000;
	// int counter = 0;
    while(true){
		// ++counter;
		// if(counter == 30) break;
        if(arr[loc] == a) return arr[loc];
        if(a > arr[loc] && a < arr[loc+1]) return arr[loc];
        if(a > arr[loc]){
			left = loc;
			loc = (left + right)/2;
		}
        else{
			right = loc;
			loc = (left+right)/2;
		}
		// cout << loc << " " << arr[loc] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    long long temp = 2;
    arr[0] = 2;
    for(int i = 1; i < 30000; i++){
        temp += 3;
        arr[i] = arr[i-1] + temp;
    }
    while(t--){
        long long n; cin >> n;
        int ans = 0;
		while(n >= 2){
			ans++;
        	n -= search(n);
		}
		cout << ans << endl;
    }
}