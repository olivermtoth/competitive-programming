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


vector<int> moveElementToTheEnd(vector<int> v, int key){
	int k = v.size()-1;
	for(int i = 0; i<k; i++){
		if(v[i] == key){
			swap(v[i], v[k]);
			k--;
		}
	}
	return v;
}

