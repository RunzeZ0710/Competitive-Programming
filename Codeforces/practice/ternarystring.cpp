#include <cstdio>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t; cin >> t;
	int counter = 0;
    while(t--){
        string s; cin >> s;
        long long lb = 0, rb=1, c1=0, c2=0, c3=0;
		long long ans = 200001;
        for(long long i = 0; i < s.size(); i++){
            if(s[i] == '1') c1++;
            else if(s[i] == '2') c2++;
            else c3++;
            if(c1 > 0 && c2 > 0 && c3 > 0){
                ans = min(ans, i-lb+1);
                for(long long j = lb; j <= i; j++){
					bool o1 = false, o2 = false, o3 = false;
                    if(s[j] == '1') {c1--; o1 = true;}
                    else if(s[j] == '2') {c2--; o2 = true;}
                    else {c3--; o3 = true;}
                    if(c1 > 0 && c2 > 0 && c3 > 0) ans = min(ans, i-j);
					else{
						if(o1) c1++;
						else if(o2) c2++;
						else c3++;
						lb = j;
						break;
					}
                }
            }
        }
		if(ans == 200001) cout << 0 << endl;
		else cout << ans << endl;
    }
}