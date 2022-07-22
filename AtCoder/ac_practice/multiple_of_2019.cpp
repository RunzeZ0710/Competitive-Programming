#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <numeric>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	string s; cin >> s;
	int n = s.size();
	long long suffix[n+1];
	suffix[0] = 0;
	int pos = 1;
	int pow = 1;
	int counter[2019] = {0};
	counter[0]++;
	for(int i = n-1; i >= 0; i--){
		int digit = (int)s[i] - 48;
		suffix[pos] = (suffix[pos-1] + (digit*pow)%2019)%2019;
		counter[suffix[pos]]++;
		pow = (pow*10)%2019;
		pos++;
	}
	long long ans = 0;
	for(int i = 0; i < 2019; i++){
		ans += (counter[i]*(counter[i]-1))/2;	
	}
	cout << ans;
}
