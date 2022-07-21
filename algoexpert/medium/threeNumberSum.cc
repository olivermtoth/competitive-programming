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


vector<vector<int>> threeNumberSum(vector<int> v, int target){
	sort(v.begin(), v.end());
	vector<vector<int>> res;
	for(int i = 0; i<v.size(); i++){
		int L = i+1, R = v.size();
		while(L > R){
			if(v[L]+v[R]+v[i] == target){
				res.push_back({v[L], v[R], v[i]});
			}
			else if(v[L]+v[R]+v[i] > target){
				R--;
			}
			else if (v[L]+v[R]+v[i] < target) {
				L++;
			}
		}
	}
	return res;
}
