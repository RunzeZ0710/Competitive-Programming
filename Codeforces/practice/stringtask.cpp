#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int main(){
    vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u', 'y'};
    vector<char> lowercase = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'};
    vector<char> uppercase = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};
    string s; cin >>s;
    string ans;
    for(int i = 0; i < s.size(); i++){
        if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) continue;
        else if(find(uppercase.begin(), uppercase.end(), s[i]) != uppercase.end()){
            ans += '.';
            ans += lowercase[find(uppercase.begin(), uppercase.end(), s[i]) - uppercase.begin()];
        }else{
            ans += '.';
            ans += s[i];
        }
    }
    cout << ans;
}