#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <tuple>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n]; 
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        int odd=0, even=0;
        for(int i : arr) if(i%2) odd++; else even++;
        if(!(odd%2) && !(even%2)) {cout << "YES" << endl; continue;}
		if((!(odd%2) && even%2) || (!(even%2) && odd%2)) {cout << "NO" << endl; continue;}
        bool valid = true;
		int prev = 0;
		
        do{
			bool found = false;
            for(int i = prev+1; i < n; i++){
                if(arr[i] - arr[prev] != 1) prev = i; 
				else{
					found = true;
					arr[i] = -1;
					arr[i-1] = -1;
					sort(arr, arr+n);
					prev += 2;
					break;
				}
            }
            if(!found) {valid = false; break;}
            odd--; even--;
            if(!(odd%2) && !(even%2)){valid = true; break;}
        }while(true);

        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}