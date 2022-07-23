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

int pairing(vector<int> red, vector<int> blue, bool fastest){
	int res = 0;
	if(fastest == true){
		sort(blue.begin(), blue.end());
		sort(red.begin(), red.end());
		for(int i = 0; i< blue.size(); i++){
			res += max(blue[i], red[red.size()-1-i]);
		}
	}
	else{
		sort(blue.begin(), blue.end());
		sort(red.begin(), red.end());
		for(int i = 0; i< blue.size(); i++){
			res += max(blue[i], red[i]);
		}
	}
	return res;
}
