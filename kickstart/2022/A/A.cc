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
	string s, i;
	cin>>s>>i;
	int a = 0, b = 0;
	while(a < s.length() && b < i.length()){
		if(s[a] == i[b]){
			a++;
			b++;
		}
		else{
			b++;
		}
	}
	if(a == s.length()){
		cout<<(int)i.length()-(int)s.length()<<'\n';
	}
	else{
		cout<<"IMPOSSIBLE\n";
	}
	
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

