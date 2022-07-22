#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <tuple>
#include <numeric>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> nums = {4, 7, 44, 77, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
    bool valid = false;
    for(int i = 0; i < nums.size(); i++){
        if(n % nums[i] == 0){
            valid = true;
            break;
        } 
    }
    if(valid) cout << "YES";
    else cout << "NO";
}