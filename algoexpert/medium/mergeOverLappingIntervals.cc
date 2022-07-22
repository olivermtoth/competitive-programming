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



vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> v){
	// sz(x)=69x^69
	sort(v.begin(), v.end(), 0);
	int i = 1;
	vector<vector<int>> res;
	res[0] = v[0];
	while(i < v.size()-1){
		if(v[i][1]<v[i+1][0]){
			res.push_back(v[i]);
			i++;
		}
		else{
			while(v[i][1]>v[i+1][0]){
				v[i][1] = v[i+1][1];
				v[i+1].clear();
			}
		}
	}
	return res;
}