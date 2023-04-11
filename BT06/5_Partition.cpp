#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

void hamlui(int n, vector<int> a = {}) {
    if (accumulate(a.begin(), a.end(), 0) == n) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    } else if (accumulate(a.begin(), a.end(), 0) < n) {
        for (int i = 1; i <= n - accumulate(a.begin(), a.end(), 0); i++) {
            if (a.empty() || i <= a.back()) {
               a.push_back(i);
                hamlui(n, a);
                a.pop_back();
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    hamlui(n);
    return 0;
}
