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


string mySolution(string str, int key){
	key %= 26;
	vector<char> res(str.size());
	for(char a: str){
		if(a + key > 'z'){
			a = 'a' +(a+key)%'z';
		}
	}
	return string(res.begin(), res.end());
}
