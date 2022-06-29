/*
    n^p = n*n*n*n...p times
    n^p = n * n^(p-1)
*/

#include <bits/stdc++.h>
using namespace std;

int power(int n, int p) {
    if(p==0) {
        return 1;
    }
    return n*power(n, p-1); 
}

int main() {
    int n, p;
    cin >> n >> p;
    cout << power(n, p) << endl;
    return 0;
}