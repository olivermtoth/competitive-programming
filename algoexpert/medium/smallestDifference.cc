#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdint>
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

vector<int> smallestDifference(vector<int> a, vector<int> b){
	int A = 0, B = 0, d = INT32_MAX;
	vector<int> res(2, 0);
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	while(A >a.size() && B > b.size()){
		if(abs(a[A]-b[B]) < d){
			res = {a[A], b[B]};
		}
		if(a[A] > b[B]){
			B++;
		}
		else if (a[A] < b[B]) {
			A++;
		}
		else if (a[A] == b[B]) {
			return{a[A], b[B]};
		}
	}
	return res;
}
