#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
        int mxn = arr[n-1] + arr[n-2];
        sort(arr, arr+n);
        int ans = 0;
        for(int i = 2; i <= mxn; i++){
        int c = 0, lb = 0, rb = n-1;
        while(lb < rb){
            if(arr[lb] + arr[rb] > i) rb--;
            if(arr[lb] + arr[rb] < i) lb--;
            if(arr[lb] + arr[rb] == i) {c++; rb--; lb++;}
        }
        ans = max(ans, c);
        }
        cout << ans << endl;
    }
}