#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <tuple>
#include <string>
using namespace std;
using ll = long long;

int n; 
int field[10][10];

void flip(){
    int x, y;
    bool stop = false;
    for(int i = n -1; i >= 0; i--){
        if(stop) break;
        for(int j = n - 1; j >= 0; j--){
            if(field[i][j] == 1){
                x = i; y = j;
                stop = true;
                break;
            }
        }
    }
    for(int i = 0; i <= x; i++){
        for(int j = 0; j <= y; j++){
            if(field[i][j] == 1) field[i][j] = 0;
            else field[i][j] = 1;
        }
    }
}
bool done(){
    bool valid = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           if(field[i][j] == 1) valid = false; 
        }
    }
    return valid;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < n; j++){
            if(s[j] == '1') field[i][j] = 1;
            else field[i][j] = 0;
        }
    }
    if(done()) cout << 0;
    else{
        int counter = 0; 
        do{
          ++counter;
          flip();
        }while(!done());
        cout << counter;
    }
}