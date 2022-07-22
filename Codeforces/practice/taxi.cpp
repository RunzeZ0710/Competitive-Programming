#include <cstdio>
#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <tuple>
using namespace std;
#define eb emplace_back;

int main(){
    long long val = 1e5;
    long long n; cin >> n;
    long long ans = 0;
	long long count3 = 0;
	long long count2 = 0;
	long long count1 = 0;
    for(long long i = 0; i < n; i++){
        int a; cin >> a;
        if(a == 4) ans++;	
	}
	ans += count3;
	if(count3 > count1) count1 = 0;
	else if(count3 < count1) count1 -= count3;
	else count1 = 0;
	ans+= count2 / 2;
	count2 -= count2 - count2/2;
	int itr = 0;
	while(count1 != 0){
		count1--;
		itr++;
		if(itr == 2) break;
	}
	ans++;
	ans += count1 / 4;
	count1 -= count1/4;
	ans += count1;
	cout << ans;
}

// #include <cstdio>
// #include <iostream>
// #include <cmath>
// #include <numeric>
// #include <algorithm>
// #include <vector>
// #include <map>
// #include <set>
// #include <string>
// #include <tuple>
// using namespace std;
// #define eb emplace_back;

// int main(){
//     long long val = 1e5;
//     int n; cin >> n;
//     long long ans = 0;
//     vector<int> filled(n);
// 	fill(filled.begin(), filled.end(), 0);
//     vector<int> arr = {};
//     for(int i = 0; i < n; i++){
//         int a; cin >> a;
//         if(a == 4) ans++;
//         else arr.emplace_back(a);
//     }
// 	if(arr.size() == 0) cout << ans;
// 	else{	
// 		long long index = 0;
//     	sort(arr.begin(), arr.end());
//     	for(long long i = arr.size(); i >= 0; i--){
//         	for(long long j = index; j < n; j++){
//             	if(filled[j] + arr[i] <= 4){
// 					filled[j] += arr[i];
// 					// if(filled[j] == 4) index = j;	
// 					break;
// 				}
//         	}
//     	}
//     	for(int i : filled){
//         	if(i != 0){
// 				ans++;
// 			}
//     	}
// 		// ans += 1;
//     	cout << ans;
// 	}
// }