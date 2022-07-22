#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <map>
#include <tuple>
#include <set>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> houses(m);
    for(int &i : houses) cin >> i;
    int pos = 1;
    int time = 0;
    for(int i = 0; i < m; i++){
        if(pos < houses[i]){
            time += houses[i] - pos;
            pos = houses[i];
        }
        else if(pos > houses[i]){
            time += houses[i] + n - pos;
            pos = houses[i];
        }
        else continue;
    }
    cout << time;
}