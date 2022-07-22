#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <cmath>
#include <tuple>
#include <map>
#include <string>
#include <numeric>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int piles[1000001] = {0};
    int pos = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        pos += a;
        piles[pos]++;
    }
    int cur = 1;
    int prev = 1;
    for(int i = 1; i <= 1000000; i++){
        prev = piles[i];
        piles[i] = cur;
        cur += prev;
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++){
		int a; cin >> a; 
		cout << piles[a] << endl;
	}
}