#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <tuple>
#include <algorithm>
#include <string>
using namespace std; 
using ll = long long;

int n; 
vector<char> visible = {};
char canvas[10][10];

bool valid(int x){
    if(x < 0 || x > n - 1) return 0;
    return 1;
}

bool overlap(char c){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(canvas[i][j] != c) continue;
            vector<char> edge = {};
            if(valid(i - 1)){
                if(find(edge.begin(), edge.end(), canvas[i - 1][j]) != edge.end()){
                    return 1;
                }else if(canvas[i - 1][j] != c && canvas[i - 1][j] != '0') edge.push_back(canvas[i - 1][j]);
            }
            if(valid(i + 1)){
                if(find(edge.begin(), edge.end(), canvas[i + 1][j]) != edge.end()){
                    return 1;
                }else if(canvas[i + 1][j] != c && canvas[i + 1][j] != '0') edge.push_back(canvas[i + 1][j]);
            }
            if(valid(j - 1)){
                if(find(edge.begin(), edge.end(), canvas[i][j-1]) != edge.end()){
                    return 1;
                }else if(canvas[i][j-1] != c && canvas[i][j - 1] != '0') edge.push_back(canvas[i][j-1]);
            }
            if(valid(j + 1)){
                if(find(edge.begin(), edge.end(), canvas[i][j + 1]) != edge.end()){
                    return 1;
                }else if(canvas[i][j+1] != c && canvas[i][j + 1] != '0') edge.push_back(canvas[i][j-1]);
            }

        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(canvas[i][j] != c) continue;
            vector<char> line = {};
            for(int k = 0; k < j; k++){
                if(canvas[i][k] == '0') continue;
                if(find(line.begin(), line.end(), canvas[i][k]) == line.end() && canvas[i][k] != c){
                    line.push_back(canvas[i][k]);
                }
            }
            for(int k = j+1; k < n; k++){
                if(find(line.begin(), line.end(), canvas[i][k]) != line.end()){
                    return 1;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(canvas[i][j] != c) continue;
            vector<char> line = {};
            for(int k = 0; k < i; k++){
                if(canvas[k][j] == '0' || canvas[k][j] == c) continue;
                if(find(line.begin(), line.end(), canvas[k][j]) == line.end() && canvas[k][j] != c){
                    line.push_back(canvas[k][j]);
                }
            }
            for(int k = n-1; k > i; k--){
                if(find(line.begin(), line.end(), canvas[k][j]) != line.end()){
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("art.in", "r", stdin);
    freopen("art.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < n; j++){
            canvas[i][j] = s[j];
            if(s[j] == '0') continue;
            if(find(visible.begin(), visible.end(), s[j]) == visible.end())
                visible.push_back(s[j]);
        }
    }
    int ans = 0;

}
