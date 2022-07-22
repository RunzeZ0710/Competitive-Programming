#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <tuple>
#include <numeric>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    long long arr[10000] = {0};
    int counter = 0;
    long long prev = 10;
    while(counter < 10000){
        prev += 9;
        long long check = prev;
        int sum = 0;
        while(check > 0){
            sum += check%10;
            check /= 10;
        }
        if(sum == 10) {arr[counter] = prev; ++counter;}
    }
    cout << arr[n-1];
}