#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <tuple>
#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> boys(n);
    for(int & i : boys) cin >> i;
    int m; cin >> m;
    vector<int> girls(m); 
    for(int & i : girls) cin >> i;
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int index = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = index; j < m; j++){
            if(boys[i] == girls[j] || boys[i] + 1 == girls[j] || boys[i] - 1 == girls[j]){
                index = j + 1;
                ans++;
				break;
            }
        }
    }
    cout << ans;
}