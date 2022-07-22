#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <tuple>
#include <string>
#include <numeric>
#include <iostream>
#include <cmath>
using namespace std;

int n, a, b, c;
int ans = 0;

int case1(){
    vector<int> s = {a, b, c};
    sort(s.begin(), s.end());
    if(n % s[0] == 0) return n/s[0];
    if(n % s[1] == 0) return n/s[1];
    if(n % s[2] == 0) return n/s[2];
    return 0;
}

int case2(){
    int mxn = 0;
    for(int i = 1; i < n; i++){
		if(a * i >= n) break;
        int cur = n - a*i;
        if(cur % b == 0) mxn = max(mxn, i + cur/b);
    }
    for(int i = 1; i < n; i++){
		if(b * i >= n) break;
        int cur = n - b*i;
        if(cur % c == 0) mxn = max(mxn, i + cur/c);
    }
    for(int i = 1; i < n; i++){
		if(a * i >= n) break;
        int cur = n - a*i;
        if(cur % c == 0) mxn = max(mxn, i + cur/c);
    }
    return mxn;
}

int case3(){
    int mxn = 0;
    for(int i = 1; i < n/a; i++){
        for(int j = 1; j < n/b; j++){
			if(a*i + b*j > n - c) break;
            int cur = n - a*i - b*j;
            if(cur % c == 0){
				mxn = max(mxn, i + j + cur/c);
			}
        }
    }
    return mxn;
}

int main(){
    cin >> n >> a >> b >> c;
    cout << max(case1(), max(case2(), case3()));
}