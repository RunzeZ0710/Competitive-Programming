#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <tuple>
using namespace std;
using ll = long long;

int n;
vector<int> stations[100];
vector<bool> visited(100);
int reachable[100];

void dfs(int s){
    if(visited[s]) return;
    visited[s] = true;
    ++reachable[s];
    for(auto u: stations[s]){
        dfs(u);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int a, b; cin >> a >> b;
        stations[a-1].push_back(b-1);
    }
    for(int i = 0; i < n; i++){
        fill(visited.begin(), visited.end(), false);
        dfs(i);
    }
    bool found = false;
    for(int i = 0; i < n; i++){
        if(reachable[i] == n){
            found = true;
            cout << i + 1;
            break;
        }
    }
    if(!found) cout << -1;
}