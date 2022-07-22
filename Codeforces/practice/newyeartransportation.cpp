#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <numeric>
#include <iostream>
#include <tuple>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n, t; cin >> n >> t;
    int arr[10000];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int visited = 1;
    bool valid = false;
    while(visited < n){
        visited += arr[visited - 1];
        if(visited == t){
            valid = true;
            break;
        }
    }
}