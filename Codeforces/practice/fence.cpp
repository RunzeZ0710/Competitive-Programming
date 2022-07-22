#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <tuple>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;

int n, k; 
vector<int> sums = {};
vector<int> arr = {};
void prefix(int x){
    if(x == n+1) return;
    sums.emplace_back(arr[x-1] + sums[x-1]);
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        arr.emplace_back(a);
    }
    sums.emplace_back(0);
    prefix(1);

}