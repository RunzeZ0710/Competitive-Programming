#include <cstdio>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include <map>
#include <iostream>
#include <set>
#include <numeric>
#include <cmath>
using namespace std;
#define endl "\n";

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        bool isTPrime = true;
        int counter = 0; 
        for(int j = 2; j <= a/2; j++){
            if(a % j == 0) ++counter;
            if(counter == 2){
                isTPrime = false;
                break;
            }
        }
        if(isTPrime) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}