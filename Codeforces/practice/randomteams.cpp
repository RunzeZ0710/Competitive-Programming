#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <numeric>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n, m; cin >> n >> m;
    long long mxn = (n-m+1) * (n-m) / 2;
	long long mn = 0;
    if(n % m == 0){
        mn = m*(n/m)*(n/m - 1)/2;
    }else{
        long long a = n / m;
		long long b = n % m;
		mn = (m-b)*(a)*(a-1)/2 + b*(a+1)*(a)/2;
    }
	cout << mn << " " << mxn;
}