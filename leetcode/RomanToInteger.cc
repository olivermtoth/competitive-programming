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
#define PI 3.141592654
#define INF 2147483647
typedef long long ll;

int main(){
	string s;
	int res = 0, p = 0;
	unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
	for(int i = s.size()-1; i >= 0; i--){
		res += m[s[i]];
	}
	return 0;
}

