#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <tuple>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 100000;
    ans = min(ans, (a+b)*c);
    ans = min(ans, a+(b*c));
    ans = min(ans, a*b*c);
    ans = min(ans, a+b+c);
    ans = min(ans, (a*b) + c);
    ans = min(ans, a*(b+c));
    cout << ans;
}