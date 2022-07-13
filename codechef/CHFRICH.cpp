#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	int T;
	cin>>T;
	while(T--){
		int a, x, b;
		cin>>a>>b>>x;
		b -= a;
		cout<<b/x<<endl;
	}
}
