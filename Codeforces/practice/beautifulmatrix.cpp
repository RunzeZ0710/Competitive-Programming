#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>
#include <string>
#include <tuple>
using namespace std;
#define eb emplace_back;
using ll = long long;

int main(){
    pair<int, int> coord;
    bool found = false;
    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){
            int a; cin >> a;
            if(a != 1) continue;
            coord.first = j;
            coord.second = i;
            break;
        }
        if(found) break;
    }
    coord.first++;
    coord.second++;
    cout << abs(coord.first - 3) + abs(coord.second - 3);
}