#include <bits/stdc++.h>
using namespace std;


int main() {
    int m[3], c[3];
    for(int i = 0; i<3; i++){
        cin >> c[i] >> m[i];
    }

    for(int i = 0; i < 100; i++){
        int x = i%3;
        int y = (i+1)%3;
        int p = min(m[x], c[y]-m[y]);
        m[x] -= p;
        m[y] += p;
    }

    for(int i = 0; i<3; i++){
        cout << m[i] << endl;
    }

    return 0;

}
