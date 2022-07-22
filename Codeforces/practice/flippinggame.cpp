#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <tuple>
#include <string>
#include <cmath>
#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int n; cin >> n;
    bool arr[100];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]) sum++;
    }
    int mxn = 0;
    int start = -1;
    int end = -1;
    for(int i = 0; i < n; i++){
        if(!arr[i] && end == -1 && start == -1) start = i;
        if(!arr[i] && start != -1 && end == -1) end = i;
        if(start != -1 && end != -1){
            mxn = max(mxn, end - start + 1);
            start = -1;
            end = -1;
        }
    }
    cout << sum + mxn;
}