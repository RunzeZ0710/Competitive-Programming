#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <string>
#include <tuple>
#include <iostream>
using namespace std;
using ll = long long;

int n, w, h;
vector<tuple<int, int, int>> env = {};
map<pair<int, int>, int> position;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> w >> h;
    int counter = 1;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        env.emplace_back(make_tuple(a, b, counter));
        counter++;
    }
    sort(env.begin(), env.end());
    int length = 0;
    vector<tuple<int, int, int>> ans = {{0, 0, 0}};
    for(int i = 0; i < n; i++){
        int a, b, c;
        tie(a, b, c) = env[i];
        int a1, b1, c1;
        tie(a1, b1, c1) = ans[length];
        if(a > w && b > h && a > a1 && b > b1){
            length++;
            ans.emplace_back(make_tuple(a, b, c));
        }
    }
    if(!length) cout << 0;
    else{
        cout << length << endl;
        for(int i = 1; i < ans.size(); i++){
            int a, b, c; 
            tie(a, b, c) = ans[i];
            cout << c << " ";
        }
    }
}