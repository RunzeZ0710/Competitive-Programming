#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <set>
#include <map>
#include <cmath>
#include <tuple>
#include <numeric>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> arr = {};
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        arr.emplace_back(make_pair(a, b));
    }
    sort(arr.begin(), arr.end());
    bool valid = false;
    for(int i = 1; i < n; i++){
        if(arr[i].second < arr[i-1].second){
            valid = true;
            break;
        }
    }
    if(valid) cout << "Happy Alex";
    else cout << "Poor Alex";
}