#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>
#include <map>
using namespace std;

int n;
map<string, int> names;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(names[s] == 0){
            cout << "OK" << endl;;
            ++names[s];
        }
        else{
            cout << s << names[s] << endl;;
            ++names[s];
        }
    }
}