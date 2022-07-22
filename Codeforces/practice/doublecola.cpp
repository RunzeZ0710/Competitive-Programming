#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>
#include <cmath>
#include <map>
#include <set>
#include <numeric>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n; cin >> n;
	string arr[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long cur = 0;
	if(n <= 5) cout << arr[n-1];
	else{
		int sum = 0;
		while(sum < n){
			sum = 5*(pow(2, cur+1) - 1); 
			cur++;
		}
    	long long size = 5;
    	while(size < n){
        	if((size + size*2) < n){
            	size = size + size*2;
			}else break;
    	}
		int counter = 0;
    	int pos = size;
		cout << pos << endl;
		for(int i = 0; i < 5; i++){
			++counter;
			pos += pow(2, cur-1);
			cout << pos << endl;
			if(pos >= n) break;
		}
		cout << arr[counter-1];
	}
}