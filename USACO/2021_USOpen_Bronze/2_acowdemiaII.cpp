#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <numeric>
#include <map>
#include <set>
#include <tuple>
using namespace std;
using ll = long long;

int n, k;
char ans[101][101];
map<string, int> names;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> k >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        names[s] = i;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) ans[i][j] = 'B';
            else ans[i][j] = '?';
        }
    }
    for(int i = 0; i < k; i++){
        string cur[101];
        for(int j = 0; j < n; j++) cin >> cur[j];
        for(int x = 0; x < n; x++){
            bool alphabetical = true;
            for(int y = x + 1; y < n; y++){
                if(cur[y-1] > cur[y]) alphabetical = false;
                if(!alphabetical){
                    ans[names[cur[x]]][names[cur[y]]] = '0';
                    ans[names[cur[y]]][names[cur[x]]] = '1';
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    
}