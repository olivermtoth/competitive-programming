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
#include <string>
#include <utility>
#include <vector>
using namespace std;

typedef long long ll;

string winner(vector<vector<string>> competitions, vector<int> res){
	unordered_map<string, int> m;
	int max = -1;
	string winner = "";
	for(int i = 0; i<res.size(); i++){
		if(m.find(competitions[i][0]) == m.end()){
			m.insert(make_pair(competitions[i][0], 0));
		}
		else if(m.find(competitions[i][1]) == m.end()){
			m.insert(make_pair(competitions[i][1], 0));
		}

		if(res[i] == 0){
			m[competitions[i][0]]++;
			pair<int, int> p;
			if(m[competitions[i][0] > max]){
				max = m[competitions[i][0]];
				winner = competitions[i][0];
			}
		}
		else{
			m[competitions[i][1]]++;
			if(m[competitions[i][1] > max]){
				max = m[competitions[i][1]];
				winner = competitions[i][1];
			}
		}
	}
	return winner;
}

int main(){
	
	return 0;
}

