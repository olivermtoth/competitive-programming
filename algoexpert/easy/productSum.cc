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
#include <any>
using namespace std;
typedef long long ll;


int productSum(vector<any> v, int depth){
	int sum = 0;
	for(auto &a: v){
		if(a.type() == typeid(vector<any>)){
			sum += productSum(any_cast<vector<any>>(a), depth+1);
		}
		else{
			sum +=  any_cast<int>(a);
		}
	}
	return sum*depth;
}