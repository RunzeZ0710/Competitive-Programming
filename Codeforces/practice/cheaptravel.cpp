#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <string>
#include <numeric>
#include <tuple>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
	double m; cin >> m;
	int a; cin >> a;
	double b; cin >> b;
	double mcost = b/m;
	if(mcost > a) cout << a*n;
	else{
		int base = int(n/m) * b;
		int extra1 = (n % int(m)) * a;
		int extra2 = b;
		if( (base+extra1) > (base+extra2) ) cout << base+extra2;
		else cout << base+extra1;
	}
}