#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <tuple>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        long long a, b; cin >> a >> b;
        long long counter = 0;
		long long steps = b/(a-1);
		long long additional = 0;
		if(b % (a-1) != 0) additional = b % (a-1) + 1;
		cout << steps*a - 1 + additional << endl;
    }
}