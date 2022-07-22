#include <cstdio>
#include <iostream>
#include <vector>
#include <numeric>
#include <map>
#include <set>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;
#define eb emmplace_back;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        int length = s.size();
        // cout << length; 
        if(length <= 10){
            cout << s << endl;
            continue;
        }
        cout << s[0] << length - 2 << s[length-1] << endl;
    }
}