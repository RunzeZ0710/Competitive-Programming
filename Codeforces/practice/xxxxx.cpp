#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <iostream>
#include <tuple>
#include <vector>
#include <numeric>
using namespace std;
using ll = long long;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int arr[n];
        int counter = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(!(arr[i]%x)) ++counter;
            sum += arr[i];
        }
        if(counter == n) {cout << -1 << endl; continue;}
        if(sum%x) {cout << n << endl; continue;}
        int lb =0, rb=n-1;
        int dist1, dist2;
        for(int i = 0; i < rb; i++) if(arr[i]%x) {dist1 = lb + i; break;}
        for(int i = n-1; i > lb; i--) if(arr[i]%x) {dist2 = rb - i; break;}
        if(dist1 >= dist2) rb -= dist2;
        else lb += dist1;
		// cout << lb << " " << rb << endl;
        cout << rb - lb << endl;
    }
}