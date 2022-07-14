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

string winner(vector<vector<string>> competitions, vector<int> res){
	unordered_map<string, int> m;
	for(int i = 0; i<res.size(); i++){
		if(m.find(competitions[i][0]) == m.end()){
			m.insert(make_pair(competitions[i][0], 0));
		}
		else if(m.find(competitions[i][1]) == m.end()){
			m.insert(make_pair(competitions[i][1], 0));
		}

		if(res[i] == 0){
			//TODO: complete
		}
	}
}

int main(){
	
	return 0;
}

