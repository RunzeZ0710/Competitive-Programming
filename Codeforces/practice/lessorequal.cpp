#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <numeric>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,k; cin >> n >> k;
    long long arr[n];
    for(int i= 0; i < n; i++){cin >> arr[i];}
    sort(arr, arr+n);
	if(!k && (arr[0] - 1)) cout << arr[0] - 1;
	else if(!k && arr[0] == 1) cout << -1;
    else if(arr[k] != arr[k-1]) cout << arr[k-1];
    else cout << -1;
}