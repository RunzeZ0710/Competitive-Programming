#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <numeric>
#include <tuple>
#include <string>
using namespace std;
#define eb emplace_back;

int main(){
    int n; cin >> n;
    int counter = 0;
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2) ++counter;
    }
    cout << counter;
}