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
	ll n, s=0;
	cin>> n;
	ll	t = n*(n+1)/2;
	for(int i = 0; i<n-1; i++){
		int temp;
		cin>>temp;
		s += temp;
	}
	cout<< t - s;
}
