#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <numeric>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
				cin >> arr[i][j];
            }
        }
		// for(int i = 0; i < n; i++){
		// 	for(int j = 0; j < m; j++){
		// 		cout << arr[i][j];
		// 	}
		// 	cout << endl;
		// }
		int row = 0;
		int counter = 0;
		while(row < n){
			bool ok = false;
			bool valid = true;
			int col = 0;
			for(int i = 0; i < m; i++){
				if(arr[row][i]) {valid = false; break;}
			}
			if(valid){
				while(col < m){
					bool valid2 = true;
					for(int i = 0; i < n; i++){
						if(arr[i][col]) {valid2 = false;}
					}
					if(valid2) {ok = true; arr[row][col] = 1; break;}
					col++;
				}
			}
			if(ok) {++counter;}
			row++;
		}
		if(!(counter%2)) cout << "Vivek" << endl;
		else cout << "Ashish" << endl;
    }
}