#include <bits/stdc++.h>
using namespace::std;

int32_t main(){
	int T;
	while(T--){
		int n, s;
		cin>>n>>s;
		cout<<min(n, abs(s-n));
	}
}
