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
	int n, ans = 0;
	cin>>n;
	int i = 5;
	while(n/i >0){
		ans+= n/i;
		i *= 5;
	}
	cout<<ans;
	return 0;
}

