#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <numeric>
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int n, m, k; 

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    int arr[1000];
    for(int i = 0; i < m+1; i++) cin >> arr[i];
    int ans = 0;
    string binary = bitset<32>(arr[m]).to_string();
    for(int i = m-1; i>=0; i--){
        int counter = 0;
        bool valid = true;
        string a = bitset<32>(arr[i]).to_string();
        for(int j = 0; j < 32; j++){
            if(a[j] != binary[j]) counter++;
            if(counter > k){
                valid = false;
                break;
            }
        }
        if(valid) ans++;
    }
    cout << ans;
}