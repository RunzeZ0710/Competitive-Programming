#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <tuple>
#include <numeric>
#include <iostream>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    char correct[3][3];
    vector<char> arr = {};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> correct[i][j];
            arr.emplace_back(correct[i][j]);
        }
    }
    char ans[3][3];
    int green = 0;
    int yellow = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> ans[i][j];
            char a = ans[i][j];
            if(correct[i][j] == a){
                green++; 
                arr[i*3 + j] = '1';
				ans[i][j] = '2';
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            char a = ans[i][j];
            if(find(arr.begin(), arr.end(), a) != arr.end()){
                ++yellow;
                auto index = find(arr.begin(), arr.end(), a) - arr.begin();
                arr[index] = '1';
            }
        }
    }
    cout << green << endl << yellow;
}