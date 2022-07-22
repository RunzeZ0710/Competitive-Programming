#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <numeric>
#include <tuple>
#include <cmath>
#include <string>
using namespace std;
#define eb emplace_back;

int main(){
    double n, m, a;
    cin >> n >> m >> a;
    cout << long long( ceil(n/a) * ceil(m/a) );
}