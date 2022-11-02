#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n , k, c = 0;
    cin>>n>>k;
    string s[n];
    for(int i = 0; i<n; i++){
        cin>>s[i];
    }
    for(int i = 0; i<n; i++){
        if(c + s[i].length() > k){
            cout<<'\n';
            c = 0;
            cout<<s[i]<<" ";
            c = s[i].length();
        }
        else{
            c += s[i].length();
            cout<<s[i]<<" ";
        }
    }
}