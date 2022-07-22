#include <cstdio>
#include <iostream>
#include <tuple>
#include <string>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <vector>
using namespace std;

string s;
int n, counter;
int arr[100001] = {0};

void seq(int x){
    if(x == s.size()) return;
    if(s[x] == s[x-1]) ++counter;
	arr[x] = counter;
    seq(x+1);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> s >> n;
    seq(1);
    for(int i = 0; i < n; i++){
		int a, b; cin >> a >> b;
		cout << arr[b-1] - arr[a-1] << endl;
	}
}