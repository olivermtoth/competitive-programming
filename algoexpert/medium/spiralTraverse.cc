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

void spiralTraverseHelper(vector<vector<int>> v, vector<int> res, int sR, int eR, int sC, int eC){
	if(sR > eR || sC > eC){
		return;
	}
	else{
		// sum upper row
		for(int i = sC; i<eC; i++){
			res.push_back(v[sR][i]);
		}
		//  sum right column
		for(int i = sR+1; i<eR; i++){
			res.push_back(v[i][eC]);
		}
		// sum downer row;
		for(int i = eC-1; i>=sC; i--){
			if(eC == sC){
				break;
			}
			res.push_back(v[eR][i]);
		}
		for(int i = eR+1; i>=sR; i--){
			if(eR == sR){
				break;
			}
			res.push_back(v[i][sC]);
		}
		spiralTraverseHelper(v, res, sR+1, eR-1, sC+1, eC-1);
	}
}

vector<int> spiralTraverse(vector<vector<int>> v){
	vector<int> res;
	spiralTraverseHelper(v, res, 0, v.size(), 0, v[0].size());
	return res;
}