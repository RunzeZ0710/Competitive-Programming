#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <tuple>
#include <string>
#include <numeric>
using namespace std;
#define eb emplace_back;
using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    int counter = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0) counter++;
    }
    cout << counter;
}