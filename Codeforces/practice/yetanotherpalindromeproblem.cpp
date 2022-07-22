#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
#include <tuple>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int counter[5001] = {0};
        bool valid = false;
        int prev;
        int count = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(counter[a] && prev != a) {valid = true; break;}
            counter[a]++;
            if(a == prev) ++count;
            else {prev = a; count = 1;}
            if(count == 3) {valid = true; break;}
        }
        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}