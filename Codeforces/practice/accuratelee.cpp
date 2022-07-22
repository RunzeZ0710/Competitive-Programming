#include <cstdio>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <iostream>
#include <numeric>
#include <tuple>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        while(true){
            bool valid = false;
            int c_zero=0, c_one=0;
            for(int i = s.size()-1; i >= 0; i--){
                if(s[i] == '0'){
                    bool switched = false;
                    for(int j = i; j >= 0; j--){
                        if(s[i] == '0' && !switched) c_zero++;
                        else if(s[i] == '1' && !c_one) {switched=true; c_one++};
                        else if(s[i] == '1' && switched && c_one) c_one++;
                        else break;
                    }
                    s.erase(i-c_one+c_zero, c_one+c_zero);
                    valid = true; break;
                }
            }
            if(!valid) {cout << s << endl; break;}
        }
    }
}