#include <cstdio>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <tuple>
#include <map>
#include <set>
#include <cmath>
#include <string>
using namespace std;

int main(){
    long long n; cin >> n;
    long long arr[100001];
    for(long long i = 0; i < n; i++){
        long long a; cin >> a;
        arr[a] += a;
    }
    for(long long i = 2; i <= 100000; i++){
        arr[i] = max(arr[i-1], arr[i-2] + arr[i]);
    }
    cout << arr[100000];
}