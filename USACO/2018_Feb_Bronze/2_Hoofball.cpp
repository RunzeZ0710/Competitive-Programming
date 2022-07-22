#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <tuple>
#include <string>
using namespace std;
using ll = long long;

int n;
vector<int> cows = {};
vector<int> change = {};
void diff(int x){
    if(x == n) return;
    change.push_back(abs(cows[x] - cows[x-1]));
    diff(x+1);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("hoofball.in", "r", stdin);
    freopen("hoofball.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        cows.push_back(a);
    }
    sort(cows.begin(), cows.end());
    diff(1);
    for(int i : change) cout << i << " ";
    cout << endl;
    bool state = 0;
    int ans = 1;
    if((change[1] - change[0]) > 0) state = 1;
    for(int i = 1; i < change.size() - 1; i++){
        if((change[i + 1] - change[i]) > 0 && state == 0){
            ++ans;
            state = 1;
        }
        else if((change[i+1] - change[i]) < 0 && state == 1){
            ++ans; 
            state = 0;
        }
    }
    cout << ans;
}