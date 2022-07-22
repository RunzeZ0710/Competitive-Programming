#include <cstdio>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <iostream>
#include <cmath>
#include <tuple>
#include <numeric>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int arr[100000];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int change25 = 0;
    int change5- = 0;
    bool valid = true;
    for(int i = 0; i < n; i++){
        if(!valid) break;
        if(arr[i] == 25) change25 += 1;
        else if(arr[i] == 50){
            if(change25) {change25 -= 1; change50 += 1;}
            else valid = false;
        }else if(arr[i] == 100){
            if(change25 >= 3) change25 -= 3;
            else if(change25 && change50) {change -=1; change50 -= 1;}
        }
    }
    if(valid) cout << "YES" << endl;
    else cout << "NO" << endl;
}