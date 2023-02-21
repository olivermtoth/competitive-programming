#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ans=0, s=0;
    cin>>n>>m;
    int B[100], L[100];
    for(int i = 0; i < n; i++){
        int d, l;
        cin>>d>>l;
        for(int j = s; j < s+d; j++){
            L[j] = l;
        }
        s += d;
    }
    s = 0;
    for(int i = 0; i < m; i++){
        int d, l;
        cin>>d>>l;
        for(int j = s; j < s+d; j++){
            B[j] = l;
        }
        s += d;
    }
    for(int i = 0; i < 100; i++){
        ans = max(ans, L[i]-B[i]);
    }
    cout<<ans;

    return 0;
}
