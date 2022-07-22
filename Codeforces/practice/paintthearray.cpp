#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <numeric>
#include <tuple>
#include <iostream>
using namespace std;
#define eb emplace_back;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        int arr[t];
        int x, y; 
        cin >> arr[0] >> arr[1];
        x = arr[0]; y = arr[1];
        for(int j = 2; j < t; j++){
            cin >> arr[j];
            if(j % 2 == 0) x = __gcd(x, arr[j]);
            else y = __gcd(y, arr[j]);
        }
        bool valid1 = true;
        bool valid2 = true;
        for(int j = 0; j < t; j++){
            if(j % 2 == 0 && arr[j] % y == 0) valid2 = false;
            else if(j % 2 == 1 && arr[j] % x == 0) valid1 = false;
        }
        if(valid1) cout << x << endl;
        else if(valid2) cout << y << endl;
        else cout << 0 << endl;
    }
}