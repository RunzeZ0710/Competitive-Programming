#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <string>
#include <tuple>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
	int ans[100001] = {0};
    for(int i = 0; i < n; i++){
		int a; cin >> a; 
		ans[a]++;
	}
    int q; cin >> q;
	for(int i = 1; i <= 100000; i++){
		ans[i] += ans[i-1];
	}
    for(int i = 0; i < q; i++){
		long long a; cin >> a;
		if(a > 100000) cout << ans[100000] << endl;
		else cout << ans[a] << endl;
	}
}