#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include <tuple>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;
    vector<int> arr2;
    arr2 = arr;
    sort(arr2.begin(), arr2.end());
    int count = 0;
    int ans[2];
    for(int i = 0; i < n; i++){
        if(arr2[i] != arr[i]){
			count++;
            ans[0] = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(arr2[i] != arr[i]){
			count++;
            ans[1] = i;
            break;
        }
    }
    if(count == 0) cout << "yes" << endl << 1 << " " << 1;
    else if(count == 2){
        reverse(arr.begin()+ans[0], arr.begin()+ans[1]+1);
        bool valid = true;
        for(int i = 0; i < n; i++){
            if(arr[i] != arr2[i]){
                valid = false;
                break;
            }
        }
        if(valid){
            cout << "yes" << endl << ans[0] + 1 << " " << ans[1] + 1;
        }else cout << "no";
    } 
}