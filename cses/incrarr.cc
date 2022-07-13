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
	ll n, ans =0;
	int mx =0;
	cin>>n;
	for(int i = 0; i<n; i++){
		int x;
		cin>> x;
		mx = max(mx, x);
		ans += mx - x;
	}
	cout<<ans;
	return 0;
}

