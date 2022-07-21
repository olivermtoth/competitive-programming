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
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;

int firstDuplicateValue(vector<int> v){
	unordered_map<int, bool> m;
	for(int a: v){
		if(m.find(a) != m.end()){
			return a;
		}
		else{
			m.insert({a, 0});
		}
	}
	return -1;
}
