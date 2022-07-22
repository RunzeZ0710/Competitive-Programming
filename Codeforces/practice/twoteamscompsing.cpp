#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <tuple>
#include <cmath>
#include <set>
#include <map>
#include <string>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        int arr[200001] = {0};
		int mxn = 0;
        int distinct = 0;
        for(int j = 0; j < n; j++){
            int a; cin >> a;
            arr[a]++;
			if(arr[a] == 1) ++distinct;
			mxn = max(mxn, arr[a]);
        }
		cout << max(min(n/2, min((distinct- 1), mxn)), min(n/2, min(distinct, mxn-1))) << endl;
    }
}