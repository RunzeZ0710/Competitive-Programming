#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <set>
#include <map>
#include <iostream>
using namespace std; 

int main(){
    string s; cin >> s;
    int counter = 0;
    map<int, char> word;
    word[0] = 'h';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';
    for(int i = 0; i < s.size(); i++){
        if(s[i] == word[counter]) counter++;
    }
    if(counter != 5) cout << "NO";
    else cout <<"YES";
}