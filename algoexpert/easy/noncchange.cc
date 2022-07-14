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

int minimum(vector<int> v){
	sort(v.begin(), v.end());
	int res = 0;
	for(int i = 0; i<v.size(); i++){
		if(1+res<v[i]){
			return res+1;
		}
		else{
			res += v[i];
		}
	}
	return res+1;
}

int main(){
	vector<int> v = {2,1,3,1,21,5,7};
	cout<<minimum(v);
	return 0;
}

