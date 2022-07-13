#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
	ll n;
	cin>>n;
	ll s = n*(n+1)/2;
	if(s % 2 == 1){
		cout<<"NO";
	}
	else{
		vector<int> v1, v2;
		ll a[n], x = s/2;
		for(int i = 0; i<n+1;i++){
			a[i] = i;
		}
		for(int  i = n; i > 0; i--){
			if(x - a[i] >= 0){
				x -= a[i];
				v1.push_back(a[i]);
			}
			else{
				v2.push_back(a[i]);
			}
		}
		cout<<"YES\n"<<v1.size()<<'\n';
		for(auto a: v1 ){
			cout<<a<<" ";
		}
		cout<<'\n'<<v2.size()<<'\n';
		for(auto a: v2){
			cout<<a<<" ";
		}
		
	}
	return 0;
}

