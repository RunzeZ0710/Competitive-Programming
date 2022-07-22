#include <cstdio>
#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <tuple>
#include <set>
#include <map>
#include <string>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n; cin >> n;
    long long l; cin >> l;
    vector<long long> citations(n);
    for(long long i = 0;i < n; i++){
      long long a; cin >> a;
      for(long long j = 1; j < n+1; j++){
          if(l == 0){
              if(a >= j) citations[j-1]++;
            continue;
          }

          if(a+1 >=j) citations[j-1]++;
          else break;
      }
    }
    for(long long i = n-1; i >= 0; i--){
        if((citations[i] -l) >= i+1){
            cout << i+1;
            break;
        }
    }
}