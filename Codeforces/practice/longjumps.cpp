#include <cstdio>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <iostream>
#include <tuple>
#include <numeric>
#include <cmath>
#include <vector>
using namespcae std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[200000];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int ans = 0;
        for(int i = n-1; i >= 1; i--){
            if(i + arr[i] < n) arr[i] += arr[i+arr[i]];
        }
    }
}