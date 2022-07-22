#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <tuple>
#include <string>
#include <iostream>
using namespace std;
using ll = long long;

int n; 
int a1, b1, a2, b2;
vector<int> swap(vector<int> arr){
    reverse(begin(arr) + a1, begin(arr) + b1 +1);
    reverse(begin(arr) + a2, begin(arr) + b2 +1);
    return arr;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("swap.in", "r", stdin);
    freopen("swap.out", "w", stdout);
    cin >> n;
    int k; cin >> k; 
    cin >> a1 >> b1 >> a2 >> b2;
    a1 -= 1; b1 -= 1; a2 -= 1; b2 -= 1;
    int period = 0;
    vector<int> ori(n);
    iota(ori.begin(), ori.end(), 0);\
    vector<int> cur;
    cur = ori;
    do{
        ++period;
        cur = swap(cur);
    }while(cur != ori);
    int total = k % period;
    for(int i = 0; i < total; i++){
        ori = swap(ori);
    }
    for(int i : ori) cout << i+1 << endl;
}