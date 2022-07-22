#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <tuple>
#include <iostream>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    long long arr[n];
    long long prefix[n+1] = {0};
    int counter = 0;
    for(int i = 0; i < n; i++) {cin >> arr[i]; ++counter; prefix[counter] = prefix[counter-1] + arr[i];}
    sort(arr, arr+n);
	long long seq[n+1] = {0};
	for(int i = 1; i < n+1; i++) {seq[i] = seq[i-1] + arr[i-1];}
    int t; cin >> t;
    while(t--){
        int type, l, r; cin >> type >> l >> r;
        if(type == 1){
            cout << prefix[r] - prefix[l-1] << endl;
        }else{
            cout << seq[r] - seq[l-1] << endl;
        }

    }
}