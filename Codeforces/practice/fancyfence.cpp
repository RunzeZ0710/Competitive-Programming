#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <string>
#include <tuple>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        double cur = 60;
        bool valid = false;
        double s = 3;
        while(cur <= a){
            cur = ( 180 * (s-2) ) / s;
            if(cur == a){
                valid = true;
                break;
            }
            else s++;
        }
        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}