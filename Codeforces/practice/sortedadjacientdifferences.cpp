#include <cstdio>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <tuple>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        long long ans[n];
        bool switch = true;
        int rb = n-1, lb = 0;
        for(int i = n-1; i >= 0; i--){
            if(switch) {ans[i] = arr[rb]; switch = false; rb--;}
            else {ans[i] = arr[lb]; switch = true; lb++;}
        }
        for(long long i : ans) cout << i << " ";
        cout << endl;
    }
}