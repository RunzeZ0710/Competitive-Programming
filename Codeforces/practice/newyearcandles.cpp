#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <tuple>
#include <map>
#include <string>
#include <cmath>
#include <numeric>
#include <iostream>
using namespace std;

int main(){
    int n, b; cin >> n >> b;
    int ans = n;
    for(int i = 0; i < n; i++){
        ans += n/b;
        n = n/b;
    }
    cout << ans;
}