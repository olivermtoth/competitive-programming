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


bool mySolution(string key, string str){
	unordered_map<char, int> m;
	for(char a: key){
		if(m.find(a) != m.end()){
			m[a]++;
		}
		else{
			m.insert({a, 1});
		}
	}
	for(char a: str){
		if(m.find(a) == m.end() || m[a] == 0){
			return false;
		}
		else{
			m[a]--;
		}
	}
	return true;
}
