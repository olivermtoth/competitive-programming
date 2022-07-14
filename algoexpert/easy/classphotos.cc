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

bool classPhoto(vector<int> blue, vector<int> red){
	sort(red.begin(), red.end());
	sort(blue.begin(), blue.end());
	bool possible = true;
	if(*red.end() > *blue.end()){
		for(int i = 0; i<(int)blue.size(); i++){
			// TODO: complete
		}
	}
	return possible;
}

int main(){
	
	return 0;
}

