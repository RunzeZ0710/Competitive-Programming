#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <numeric>
#include <tuple>
using namespace std;
using ll = long long;

int n, m, ans=0;
vector<int> arr[100001];
int cats[100001];
bool visited[100001];
int counter[100001];
int pre = 1;

void dfs(int x){
	if(visited[x]) return;
    visited[x] = true;
	if(cats[x]) counter[x] = counter[pre] + 1;
	else counter[x] = 0;
	if(counter[x] > m){
		return;
	}
	if(arr[x].size() == 1 && x != 1) ans++;
	for(auto u : arr[x]){
        pre = x;
		dfs(u);
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> cats[i];
    for(int i = 1; i < n; i++){
        int a, b; cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
	dfs(1);
	cout << ans;
}