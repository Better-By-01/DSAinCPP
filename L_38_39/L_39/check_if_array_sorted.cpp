#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {    
    if(n==1) {
        return true;
    }
    return (arr[0] < arr[1] && isSorted(arr+1, n-1));
}

int main() {
    int arr[] = {1};
    cout << isSorted(arr, 1) << endl;
    return 0;
}