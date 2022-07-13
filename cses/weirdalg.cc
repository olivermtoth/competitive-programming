#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
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
	while(n>1){
		cout<<n<<" ";
		if (n%2 == 0) {
			n /= 2;
		}
		else{
			n = 3*n +1;
		}
	}
	cout<<n;
}
