#include <cstdio>
#include <algorithm>
#include <set>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <iostream>
#include <numeric>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        long long n, k; cin >> n >> k; 
        string s = "a";
        s.resize(n, 'a');
        k--;
        long long i = 1;
        while(k >= 0){
            k -= i;
            i++;
        }
        k += i;
        s[n-k] = 'b';
        s[n-i] = 'b';
        cout << s << endl; 
    }
}