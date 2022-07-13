#include <bits/stdc++.h>
#include <cstring>
using namespace std;

const int NMAX = 300000;

void make(int n, int prefix[], int suffix[], int arr[]){
	memset(prefix, 0, n);
	prefix[0] = arr[0];
	for (int i = 1; i < n; i++) {
		prefix[i] = __gcd(arr[i], prefix[i-1]);
	}
	memset(suffix, 0, n);
	suffix[n-1] = arr[n-1];
	for(int i = n-2; i >= 0; i--){
		suffix[i] = __gcd(arr[i], suffix[i+1]);
	}
}

int dp(int l, int r, int a[], int suffix[], int prefix[], int n){
	if (l == 0) {
		return suffix[l+1];
	}
	else if(r == n-1){
		return prefix[r-1];
	}
	return __gcd(prefix[l-1], suffix[r+1]);
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int n, ans = 0, a[NMAX], prefix[NMAX], suffix[NMAX] ;
		cin>>n;
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		make( n, prefix, suffix, a);
		for(int i = 0; i<n; i++){
			if(dp(i,i, a,suffix,prefix,n) > 1){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
