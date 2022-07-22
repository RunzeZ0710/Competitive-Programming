#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <numeric>
#include <cmath>
#include <vector>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    vector<int> b1_pos = {};
    vector<int> a1_pos = {};
    vector<int> a2_pos = {};
    vector<int> b2_pos = {};
    bool valid = false;
    bool ab = false;
    bool ba = false;
    for(int i = 0; i < s.size(); i++){
		
        string sub = s.substr(i, 2);
		// cout << sub << " ";
        if(sub.size() == 1) break;
        if(sub == "AB"){
            ab = true;
            a1_pos.emplace_back(i);
            b1_pos.emplace_back(i+1);
        }
        if(sub == "BA"){
            ba = true;
            a2_pos.emplace_back(i+1);
            b2_pos.emplace_back(i);
        }
    }
	// for(int i : a1_pos) cout << i << " ";
	// cout << endl;
	// for(int i : b1_pos) cout << i << " ";
	// cout << endl;
	// for(int i : b2_pos) cout << i << " ";a
	// cout << endl;
	// for(int i : a2_pos) cout << i << " ";
	if(!ab || !ba) cout << "NO";
    else{
		if(b1_pos[0] != b2_pos[b2_pos.size() -1] && b1_pos[0] < b2_pos[b2_pos.size() -1] ) valid = true;
		else if(a2_pos[0] != a1_pos[a1_pos.size() -1] && a2_pos[0] < a1_pos[a1_pos.size() -1]) valid = true;
    	if(!valid) cout <<  "NO";
    	else cout << "YES";
	}
}
