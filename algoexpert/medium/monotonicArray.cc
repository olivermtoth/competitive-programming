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


bool monotonicArray(vector<int> v){
	bool not_dec = true, not_inc = true;
	for(int i = 0; i<v.size(); i++){
		if(v[i] < v[i+1]){
			not_dec = false;
		}
		else if (v[i] > v[i+1]) {
			not_inc = false;
		}
	}
	return not_dec || not_inc;
}