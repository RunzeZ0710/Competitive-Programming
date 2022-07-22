#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <numeric>
#include <vector>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        if(!(n%2) && k%2){
            if(n < 2*k){
                cout << "NO" << endl;
                continue;
            }
            long long arr[k];
            int sum = 0;
            for(int i = 0; i < k-1; i++){
                arr[i] = 2;
                sum+=2;
            }
            arr[k-1] = n-sum;
			cout << "YES" << endl;
			for(long long i : arr) cout << i << " ";
			cout << endl;
        }
		else if(n%2 && k%2){
            if(n < k){
                cout << "NO" << endl;
                continue;
            }
            long long arr[k];
            int sum = 0;
            for(int i = 0; i < k-1; i++){
                arr[i] = 1;
                sum++;
            }
            arr[k-1] = n-sum;
            cout << "YES" << endl;
            for(long long i : arr) cout << i << " ";
            cout << endl;
        }else if(n%2 && !(k%2)) cout << "NO" << endl;
        else if(!(n%2) && !(k%2)){
            if(n < k) {cout << "NO" << endl; continue;}
            long long arr[k];
            int sum = 0;
            for(int i = 0; i < k-1; i++){
                arr[i] = 1;
                sum += 1;
            }
            arr[k-1] = n-sum;
            cout << "YES" << endl;
            for(long long i : arr) cout << i << " ";
            cout << endl;
        }
    }

}