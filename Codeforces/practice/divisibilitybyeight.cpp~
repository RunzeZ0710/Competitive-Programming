#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <tuple>
#include <cstdio>
using namespace std;
using ll = long long;

string s;

int case1(){
	for(int i = 0; i < s.size(); i++){
		int digit = (int)s[i]-48;
		if(!(digit%8)) return digit;
	}
	return -1;
}

int case2(){
	for(int i = 0; i < s.size(); i++){
		for(int j = i+1; j < s.size(); j++){
			int num = ((int)s[i]-48)*10 + (int) s[j]-48;
			if(!(num%8)) return num;
		}
	}
	return -1;
}

int case3(){
	for(int i = 0; i < s.size(); i++){
		for(int j = i+1; j < s.size(); j++){
			for(int k = j+1; k < s.size(); k++){
				int num = ((int)s[i]-48)*100 + ((int)s[j]-48)*10 + (int)s[k]-48;
				if(!(num%8)) return num;
			}
		}
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> s;
	int one_digit = case1();
	if(one_digit != -1) cout << "YES" << endl << one_digit; 
	else{
		int two_digit = case2();
		if(two_digit != -1) cout << "YES" << endl << two_digit;
		else{
			int three_digit = case3();
			if(three_digit != -1 ) cout << "YES" << endl << three_digit;
			else cout << "NO";
		}
	}
}
