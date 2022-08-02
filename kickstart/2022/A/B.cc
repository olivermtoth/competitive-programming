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
#define PI 3.141592654
#define INF 2147483647
typedef long long ll;

void solve(){
	string s;
	cin>>s;
	int p = 0, k = 0;
	for(char a: s){
		p = (p + a -'0')%9;
	}
	p = (9 - p)%9;
	bool i = false;
	while(!p&&!k||k<s.length()&&s[k]-'0' <= p){
		k++;
	}
	cout<<s.substr(0,k)<<p<<s.substr(k)<<'\n';
}

int main(){
	int TT, i = 1;
	cin>>TT;
	while(TT--){
		cout<<"Case #"<<i<<": ";
		solve();
		i++;
	}
	return 0;
}
