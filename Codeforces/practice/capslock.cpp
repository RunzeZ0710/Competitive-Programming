#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main(){
    vector<char> uppercase = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    vector<char> lowercase = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string s; cin >> s;
    bool case1 = false;
    bool case2 = false;
    if(find(lowercase.begin(), lowercase.end(), s[0]) != lowercase.end() && find(uppercase.begin(), uppercase.end(), s[1]) != uppercase.end()) case1 = true;
    else if(find(uppercase.begin(), uppercase.end(), s[0]) != uppercase.end() && find(uppercase.begin(), uppercase.end(), s[1]) != uppercase.end()) case2 = true;
    if(case1){
        auto index1 = find(lowercase.begin(), lowercase.end(), s[0]) - lowercase.begin();
        cout << uppercase[index1];
        for(int i = 1; i < s.size(); i++){
            auto index2 = find(uppercase.begin(), uppercase.end(), s[i]) - uppercase.begin();
            cout << lowercase[index2];
        }
    }else if(case2){
        for(int i = 0; i < s.size(); i++){
            auto index = find(uppercase.begin(), uppercase.end(), s[i]) - uppercase.begin();
            cout << lowercase[index];
        }
    }
	else cout << s;
}