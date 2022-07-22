#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <tuple>
#include <string>
#include <cmath>
#include <numeric>
using namespace std;

int main(){
	int m, s; cin >> m >> s;
	vector<int> mn(m);
	fill(mn.begin(), mn.end(), 0);
	mn[0] = 1;
	int sum1 = 1;
	int sum2 = 1;
	vector<int> mxn(m);
	fill(mxn.begin(), mxn.end(), 0);
	mxn[0] = 1;
	int index2 = 0;
	int index1 = m-1;
	if( (s == 0 && m != 1) || (m*9 < s) ) cout << -1 << " " << -1;
	else{
		if(s == 0 && m == 1) cout << 0 << " " << 0;
		else{
		while(sum1 < s){
			if(mn[index1] == 9) index1--;
			mn[index1]++;
			sum1++;
		}
		while(sum2 < s){
			if(mxn[index2] == 9) index2++;
			mxn[index2]++;
			sum2++;
		}
		for(int i = 0; i < m; i++) cout << mn[i];
		cout << " ";
		for(int i = 0; i < m; i++) cout << mxn[i];
		}
	}
}