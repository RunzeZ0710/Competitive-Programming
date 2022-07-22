#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <tuple>
#include <numeric>
#include <string>
using namespace std;
using ll = long long;

int n, m; 
char pasture[1001][1001];
int ans = 0;

void check(int y, int x){
    if(pasture[y][x+1] == 'G' && pasture[y][x+2] == 'C'){
        pasture[y][x+1] = '.';
        ans++;
    }
    if(pasture[y][x-1] == 'G' && pasture[y][x-2] == 'C'){
        pasture[y][x-1] = '.';
        ans++;
    }
    // if(pasture[y+1][x] == 'G' && pasture[y+2][x] == 'C'){
    //     pasture[y+1][x] = '.';
    //     ans++;
    // }
    // if(pasture[y-1][x] == 'G' && pasture[y-2][x] == 'C'){
    //     pasture[y-1][x] = '.';
    //     ans++;
    // }
    // if(pasture[y+1][x] == 'G' && pasture[y+1][x+1] == 'C'){
    //     pasture[y+1][x] = '.';
    //     ans++;
    // }
    // if(pasture[y+1][x] == 'G' && pasture[y+1][x-1] == 'C'){
    //     pasture[y+1][x] = '.';
    //     ans++;
    // }
    // if(pasture[y][x+1] == 'G' && pasture[y+1][x+1] == 'C'){
    //     pasture[y][x+1] = '.';
    //     ans++;
    // }
    if(pasture[y][x+1] == 'G' && pasture[y-1][x+1] == 'C'){
        pasture[y][x+1] = '.';
        ans++;
    }
    if(pasture[y-1][x] == 'G' && pasture[y-1][x+1] == 'C'){
        pasture[y-1][x] = '.';
        ans++;
    }
    if(pasture[y-1][x] == 'G' && pasture[y-1][x-1] == 'C'){
        pasture[y-1][x] = '.';
        ans++;
    }
    if(pasture[y][x-1] == 'G' && pasture[y-1][x-1] == 'C'){
        pasture[y][x-1] = '.';
        ans++;
    }
    // if(pasture[y][x-1] == 'G' && pasture[y+1][x-1] == 'C'){
    //     pasture[y][x-1] = '.';
    //     ans++;
    // }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> pasture[i][j];
        }
    }
    int counter = 1;
    map<pair<int, int>, int> cow;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(pasture[i][j] == 'C'){
                cow[make_pair(i, j)] = counter;
                counter++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(pasture[i][j] == 'C'){
                check(i, j);
            }
        }
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << pasture[i][j];
        }
        cout << endl;
    }
}