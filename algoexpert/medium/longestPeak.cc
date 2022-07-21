#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstddef>
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


int longestPeak(vector<int> v){
	int i = 1, res = 0;
	while(i <v.size()-1){
		bool isPeak = false;
		if(v[i-1]<v[i] && v[i]>v[i+1]){
			isPeak = true;
		}
		if(isPeak){
			int R = i+2, L=i-2;
			while(v[L]>v[L-1] && L>0){
				L--;
			}
			while(v[R]>v[R+1] && R<v.size()){
				R++;
			}
			res = max(res, R-L-1);
			i=R;
		}
	}
	return res;
}