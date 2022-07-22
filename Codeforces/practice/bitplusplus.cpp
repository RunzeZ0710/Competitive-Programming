#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <iostream>
#include <numeric>
#include <string>
#include <tuple>
using namespace std;
#define eb emplace_back;
using ll = long long;

int main(){
    int n; cin >> n;
    int x = 0;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(s.substr(0, 2) == "--" || s.substr(1, 3) == "--") x--;
        else x++;
    }
    cout << x; 
}