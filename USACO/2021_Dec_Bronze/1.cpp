#include <cstdio>
#include <numeric>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
#include <tuple>
#include <set>
#include <string>
using namespace std;
using ll = long long;

int n; 
string s;
vector<pair<int, int>> sums = {};
int numh = 0;
int numg = 0;

void seq(int x){
    if(x == n + 1) return;
    if(s[x] == 'G') numg++;
    else numh++;
    sums.emplace_back(make_pair(numg, numh));
    seq(x+1);
}

 
int main(){
    cin >> n;
    cin >> s;
    sums.emplace_back(make_pair(0, 0));
    seq(0);
    // for(int i = 0; i < n+1; i++){
    //     cout << sums[i].first << " " << sums[i].second << endl;
    // }
    int counter = 0;
    for(int i = 0; i < n+1; i++){
        for(int j = i+3; j < n+1; j++){
            if(sums[j].first - sums[i].first == 1 || sums[j].second - sums[i].second == 1) ++counter;
        }
    }
    cout << counter;
}