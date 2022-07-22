#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <tuple>
#include <string>
#include <cmath>
#include <numeric>
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<long long> errors(n);
    for(long long &i : errors) cin >> i;
    vector<long long> c1(n-1);
    for(long long &i : c1) cin >> i;
    vector<long long> c2(n-2); 
    for(long long &i : c2) cin >> i;
    sort(errors.begin(), errors.end());
    sort(c1.begin(), c1.end());
    sort(c2.begin(), c2.end());
    for(int i = 0; i < n-1; i++){
        if(c1[i] != errors[i]){
            cout << errors[i] << endl;
            break;
        }
    }
    for(int i = 0; i < n-2; i++){
        if(c2[i] != c1[i]){
            cout << c1[i];
            break;
        }
    }
}