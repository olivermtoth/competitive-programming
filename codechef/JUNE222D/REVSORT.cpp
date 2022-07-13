#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long


bool solve(void){
	ll n, a[(int) 10e5], x;
	cin>>n>>x;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i <n; i++){
		if (a[i] > a[i+1]) {
			if (a[i]+a[i+1] >:q:q x) {
				return false;
			}	
		}
		else {
			swap(a[i], a[i+1]);
		}
	}
	return true;
}

int main(){
	int T;
	cin>>T;
	while(T--){
		if(solve())	cout<<"yes"<<endl;
		else	cout<<"no"<<endl;
	}
	return 0;
}
