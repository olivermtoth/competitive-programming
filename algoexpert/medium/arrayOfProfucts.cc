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


vector<int> arrayOfProducts(vector<int> v){
	const int N = v.size();
	vector<int>	res(N), left(N, 1), right(N, 1);
	for(int i = 1; i<N; i++){
		left[i] = left[i-1]*v[i-1];
	}
	for(int i = N-2; i >= 0; i--){
		right[i] = v[i+1]*right[i+1];
	}
	for(int i = 0; i<N; i++){
		res[i] = left[i]*right[i];
	}
	return res;
}