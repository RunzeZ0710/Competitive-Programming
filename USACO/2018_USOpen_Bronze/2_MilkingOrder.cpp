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

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("milkorder.in", "r", stdin); 
    freopen("milkorder.out", "w", stdout);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> cows(n); 
    fill(cows.begin(), cows.end(), 0);
    vector<int> order = {};
    for(int i = 0; i < m; i++){
        int a; cin >> a;
        order.push_back(a);
    }
    for(int i = 0; i < k; i++){
        int c, p; cin >> c >> p;
        cows[p - 1] = c;
    }
    int range = n - 1;
    for(int i = order.size() -1; i >= 0; i--){
        if(find(cows.begin(), cows.end(), order[i]) != cows.end()){
            range = find(cows.begin(), cows.end(), order[i]) - cows.begin() - 1;
            continue;
        }
        for(int j = range; j >= 0; j--){
            if(cows[j] == 0){
                cows[j] = order[i];
                range = j - 1;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(find(cows.begin(), cows.end(), 1) != cows.end()){
            cout << find(cows.begin(), cows.end(), 1) - cows.begin() + 1;
            break;
        }
        else if(cows[i] == 0){
            cout << i + 1; 
            break;
        }
    }
    cout << endl;
    for(int i : cows) cout << i << " ";
}