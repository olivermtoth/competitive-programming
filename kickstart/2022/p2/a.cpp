#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k, s = 0;
	cin>>n>>k;
	for(int i = 0; i<n ;i++){
		int t;
		cin>>t;
		s += t;
	}
	cout<<s%k<<endl;
}

int main(){
	int T, i = 1;
	cin>>T;
	while(T--){
		cout<<"Case #"<<i<<": ";
		solve();
		i++;
	}
}
