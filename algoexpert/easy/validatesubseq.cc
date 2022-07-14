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

bool first(vector<int> v, vector<int> s){
	int c = 0;
	for(int a: v){
		if(c == (int) maks.size()){
			break;
		}
		else if( a == s[c]){
			c++;
		}
	}
	return c == (int)s.size();
}

int main(){
	
	return 0;
}

