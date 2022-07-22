#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <iostream>
#include <tuple>
#include <set>
#include <map>
#include <numeric>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s1, s2; cin >> s1 >> s2;
    int p1 = 0; int m1 = 0;
    int p2 = 0; int m2 = 0;
    int total = 0;
    int n = s1.size();
    for(int i = 0; i < n; i++) if(s1[i] == '+') p1++; else m1++;
    for(int i = 0; i < n; i++) if(s2[i] == '+') p2++; else if(s2[i] == '-') m2++; else total++;
    if(p1 == p2 && m1 == m2) cout << 1.000000000000;
    else if(p1 - p2 < 0 || m1 - m2 < 0) cout << 0.000000000000;
    else{
        double ans = pow((double)0.5, (double)(p1-p2)) * pow((double)0.5, (double)(m1 - m2));
		int top = 1;
        int bottom = 1;
        for(int i = total; i > total-m1-m2; i--) top *= i;
        for(int i = m1-m1; i >= 1; i--) bottom *= i;
        ans += double(top/bottom);
        cout << ans;
    }
}