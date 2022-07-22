#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
#include <iostream>
#include <tuple>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int A[4];
        int B[4];
        int change1 = 0;
        int change2 = 0;
        for(int i = 0; i < 4; i++) cin >> A[i];
        for(int i = 0; i < 4; i++) cin >> B[i];
        // for(int i = 0; i < 4; i++){
        //     for(int j = 0; j < 4; j++){
        //         if(A[i] > B[i]) change1++;
        //     }
        // }
        // for(int i = 0; i < 4; i++){
        //     for(int j = 0; j < 4; j++){
        //         if(A[i] < B[i]) change2++;
        //     }
        // }
        // int hold[4] = {0};
        // if(change1 < change2){
        //     for(int i = 0; i < 4; i++) hold[i] = A[i];
        //     for(int i = 0; i< 4; i++) A[i] = B[i];
        //     for(int i = 0; i < 4; i++) B[i] = hold[i];
        // }
        int diff[4] = {-1};
        sort(A, A+4);
        sort(B, B+4);
        int C[4];
        for(int i = 0; i < 4; i++){
            if(A[i] > B[i] && A[i] != 10) diff[i] = 1;
            else if(A[i] < B[i] && B[i] != 1) diff[i] = 0;
        }
        int counter1 = 0;
        int counter2= 0;
        for(int i= 0 ;i < 4; i++){
            if(diff[i] == 1) counter1++;
            else if(diff[i] == 0) counter2++;
			// else if(diff[i] == -1) {counter1++; counter2++;}
        }
        if(counter1 != 0 && counter2 != 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}