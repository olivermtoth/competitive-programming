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
// time complexity = O(n); space complexity = O(1)
int minimumWaitingTime(vector<int> v){
	int total = 0;
	if(v.size() == 1){
		return 0;
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		total += (v.size()-i-1)*v[i];
	}
	return total;
}

int main(){
	vector<int> test = {3, 6, 1, 2, 2};
	cout<<minimumWaitingTime(test);
	return 0;
}

