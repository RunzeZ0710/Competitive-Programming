#include <cstdio>
#include <iostream>
#include <set>
#include <map>
#include <tuple>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <algorithm>
using namespace std;

int arr[100001] = {0};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> nums(n);
    for(int &i : nums) cin >> i;
    reverse(nums.begin(), nums.end());
    vector<int> ans = {};
    int counter = 0;
    for(int i = 0; i < n; i++){
        if(arr[nums[i]] != 0){
            ans.emplace_back(counter);
            continue;
        }
        arr[nums[i]]++;
        counter++;
        ans.emplace_back(counter);
    }
	reverse(ans.begin(), ans.end());
    for(int i = 0; i < m; i++){
        int a; cin >>a;
        cout << ans[a-1] << endl;
    }
}