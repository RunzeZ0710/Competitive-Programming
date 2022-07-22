#include <cstdio>
#include <iostream>
using namespace std;
using ll = long long;

int n;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    if(n % 2 == 0 && n != 0 && n != 2) cout << "YES";
    else cout << "NO";
}