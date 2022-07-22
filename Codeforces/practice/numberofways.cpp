#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <numeric>
#include <tuple>
#include <cmath>
#include <iostream>
using namespace std;
using ll = long long;

int n;
long long sum = 0;
vector<long long> prefix = {0};
vector<long long> arr = {};

void seq(int x){
    if(x == n+1) return;
    prefix.emplace_back(prefix[x-1] + arr[x-1]);
    seq(x+1);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        sum += a;
        arr.emplace_back(a);
    }
    if(sum % 3 != 0) cout << 0;
    else{
        seq(1);
        for(int i : prefix) cout << i << " ";
        
    }
}