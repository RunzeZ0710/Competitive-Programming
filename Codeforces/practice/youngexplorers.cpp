#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <iostream>
#include <numeric>
#include <tuple>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] + i - 1 < n) {i += arr[i] - 1; ++counter;}
        }
        cout << ans << endl;
    }
}