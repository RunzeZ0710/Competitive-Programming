#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <cmath>
#include <numeric>
#include <cstdio>
#include <tuple>
using namespace std;
using ll = long long;

vector<string> arr(4);

bool case1(string x){
	if(find(arr[0].begin(), arr[0].end(), x[0]) != arr[0].end()) return true;
	if(find(arr[1].begin(), arr[1].end(), x[0]) != arr[0].end()) return true;
	if(find(arr[2].begin(), arr[2].end(), x[0]) != arr[0].end()) return true;
	if(find(arr[3].begin(), arr[3].end(), x[0]) != arr[0].end()) return true;
	return false;
}

bool case2(string x){
	int counter = 0;
	if(find(arr[0].begin(), arr[0].end(), x[0]) != arr[0].end()) counter++;
	if(find(arr[1].begin(), arr[1].end(), x[1]) != arr[1].end()) counter++;
	if(counter == 2) return true;
	while(next_permutation(arr.begin(), arr.end())){
		int valid = 0;
		if(find(arr[0].begin(), arr[0].end(), x[0]) != arr[0].end()) valid++;
		if(find(arr[1].begin(), arr[1].end(), x[1]) != arr[1].end()) valid++;
		if(valid == 2) return true;
	}
	return false;
}

bool case3(string x){
	int counter = 0;
	if(find(arr[0].begin(), arr[0].end(), x[0]) != arr[0].end()) ++counter;
	if(find(arr[1].begin(), arr[1].end(), x[1]) != arr[1].end()) ++counter;
	if(find(arr[2].begin(), arr[2].end(), x[2]) != arr[2].end()) ++counter;
	if(counter == 3) return true;
	while(next_permutation(arr.begin(), arr.end())){
		int valid = 0; 
		if(find(arr[0].begin(), arr[0].end(), x[0]) != arr[0].end()) ++valid;
		if(find(arr[1].begin(), arr[1].end(), x[1]) != arr[1].end()) ++valid;
		if(find(arr[2].begin(), arr[2].end(), x[2]) != arr[2].end()) ++valid;
		if(valid == 3) return true;
	}
	return false;
}

bool case4(string x){
	int counter = 0;
	if(find(arr[0].begin(), arr[0].end(), x[0]) != arr[0].end()) ++counter;
	if(find(arr[1].begin(), arr[1].end(), x[1]) != arr[1].end()) ++counter;
	if(find(arr[2].begin(), arr[2].end(), x[2]) != arr[2].end()) ++counter;
	if(find(arr[3].begin(), arr[3].end(), x[3]) != arr[3].end()) ++counter;
	if(counter == 4) return true;
	while(next_permutation(arr.begin(), arr.end())){
		int valid = 0;
		if(find(arr[0].begin(), arr[0].end(), x[0]) != arr[0].end()) ++valid;
		if(find(arr[1].begin(), arr[1].end(), x[1]) != arr[1].end()) ++valid;
		if(find(arr[2].begin(), arr[2].end(), x[2]) != arr[2].end()) ++valid;
		if(find(arr[3].begin(), arr[3].end(), x[3]) != arr[3].end()) ++valid;
		if(valid == 4) return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	for(string &i : arr) cin >> i;
	while(n--){
		string s; cin >> s;
		sort(arr.begin(), arr.end());
		if(s.size() == 1) if(case1(s)) cout << "YES" << endl; else cout << "NO" << endl;
		else if(s.size() == 2) if(case2(s)) cout << "YES" << endl; else cout << "NO" << endl;
		else if(s.size() == 3) if(case3(s)) cout << "YES" << endl; else cout << "NO" << endl;
		else if(s.size() == 4) if(case4(s)) cout << "YES" << endl; else cout << "NO" << endl;
	}
}
