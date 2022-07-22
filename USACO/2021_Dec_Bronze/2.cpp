#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <tuple>
#include <iostream>
#include <string>
#include <numeric>
using namespace std;
using ll = long long;

int n;
int temp[100000];
int perf[100000];
int diff[100000];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> perf[i];
    for(int i = 0; i < n; i++) cin >> temp[i];
    // for(int i = 0; i < n; i++){
    //     cout << diff[i] << " ";
    // }
    bool valid = false;
    int counter = 0;
    while(!valid){
        int start;
        int end;
		int pcount = 0;
		int ncount = 0;
		for(int i = 0; i < n; i++){
			if(perf[i] - temp[i] > 0){diff[i] = 1; pcount++;}
			else if(perf[i] - temp[i] < 0){diff[i] = -1; ncount++;}
			else diff[i] = 0;
		}
		if(pcount >= ncount){
			for(int i = 0; i < n; i++){
				if(diff[i] == 1){
					start = i;
					break;
				}
			}
			for(int i = n -1; i >= 0; i--){
				if(diff[i] == 1){
					end = i;
					break;
				}
			}
			for(int i = start; i <= end; i++){
				temp[i]++;
			}
		}else{
			for(int i = 0; i < n; i++){
				if(diff[i] == -1){
					start = i;
					break;
				}
			}
			for(int i = n -1; i >= 0; i--){
				if(diff[i] == -1){
					end = i;
					break;
				}
			}
			for(int i = start; i <= end; i++){
				temp[i]--;
			}
		}
		valid = true;
		for(int i = 0; i < n; i++){
			if(temp[i] != perf[i]){
				valid = false;
				break;
			}
		}
		++counter;
    }
    cout << counter;
}