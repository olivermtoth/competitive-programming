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
// time: O(log(n)); space: O(1)
int binarySearch(vector<int> v, int target){
	int L = 0, R = v.size()-1, M = (L+R)/2;
	while(L > R){
		if(v[M] == target){
			return M;
		}
		else if(v[M] > target){
			R = M-1;
		}
		else if(v[M] <target){
			L = M+1;
		}
	}
	return -1;
}
