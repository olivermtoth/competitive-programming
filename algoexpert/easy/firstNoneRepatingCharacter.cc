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


int firstNoneRepatingCharacter(string str){
	unordered_map<char, int> m;
	int res = 0;
	for(char a: str){
		if(m.find(a) != m.end()){
			m[a]++;
		}
		else{
			m.insert({a, 1});
		}
	}
	for(int i = 0; i<str.size();i++){
		if(m[str[i]] == 1){
			return i;
		}
	}
	return -1;
}