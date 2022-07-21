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

// time:O(log(n)); space:O(1)
vector<int> threeLargestNumber(vector<int> v){
	sort(v.begin(), v.end());
	return{v[v.size()-1], v[v.size()-2], v[v.size()-3]};
}