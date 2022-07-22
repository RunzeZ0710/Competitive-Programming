#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <tuple>
#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n]; 
        for(int i = 0; i < n; i++) cin >> arr[i];
        bool decreasing = false;
        int counter = 0;
        for(int i = n-1; i > 0; i--){
            ++counter;
            if(arr[i-1] - arr[i] < 0) decreasing = true;
            if(decreasing && arr[i-1] - arr[i] > 0) break;
        }
        cout << n - counter << endl;
    }
}