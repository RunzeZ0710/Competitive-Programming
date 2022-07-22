#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    vector<tuple<int, int, int>> arr={};
    for(int i = 1; i < 15; i++){
        arr.emplace_back(make_tuple(i, i*2, 1));
        arr.emplace_back(make_tuple(i, i-1, 1));
    }
}