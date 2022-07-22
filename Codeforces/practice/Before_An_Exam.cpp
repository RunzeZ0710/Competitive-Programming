#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <tuple>
#include <numeric>
#include <iostream>
using namespace std;
using ll = long long;

int d; int sum;

int main(){
    cin >> d >> sum;
    vector<pair<int, int>> logs = {};
    vector<int> difference = {};
    int logsum2 = 0;
    int logsum = 0;
    for(int i = 0; i < d; i++){
        int a, b; cin >> a >> b;
        logs.emplace_back(make_pair(a, b));
        difference.emplace_back(b-a);
        logsum += b;
        logsum2 += a;
    }
    if(logsum < sum) cout << "NO";
    else if(logsum2 > sum) cout << "NO";
    else{
        int diff = logsum - sum;
        for(int i = 0; i < d; i++){
            if(diff <= 0) break;
            if(difference[i] >= diff){
                difference[i] = difference[i] - diff;
                break;
            }
            else{
                diff -= difference[i];
                difference[i] = 0; 
            }
        }
        cout << "YES" << endl;
        for(int i = 0; i < d; i++){  
            cout << logs[i].first + difference[i] << " ";
        }  
    }
    
}