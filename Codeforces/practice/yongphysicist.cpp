#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int x = 0, y = 0, z = 0;
    for(int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        x += a; y += b; z += c;
    }
    if(!x && !y && !z) cout << "YES";
    else cout << "NO";
}