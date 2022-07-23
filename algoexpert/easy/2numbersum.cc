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

// time comlexity = O(n^2); space comlexity = O(1)
vector<int> first(vector<int> v, int target){
	for(int i = 0; i<v.size()-1; i++){
		for(int j = i+1; j<v.size(); j++){
			if(v[i]+v[j]==target){
				return {v[i], v[j]};
			}
		}
	}
	return {-1, -1};
}

// timecomplexity = O(n); spacecomplexity = O(n)
vector<int> second(vector<int> v, int target){
	map<int, bool> m;
	for(int i = 0; i<v.size(); i++){
		if(m.contains(target-v[i])){
			return {v[i], target-v[i]};
		}
		else{
			m.insert({v[i], 0});
		}
	}
	return {-1, -1};
	
}

// timecomplexity = O(nlog(n)), spacecomplexity = O(1)
vector<int> third(vector<int> v, int target ){
	sort(v.begin(), v.end());
	int L = 0, R = v.size()-1;
	while (L<R) {
		if(v[L]+v[R] == target){
			return{v[L], v[R]};
		}
		else if(v[L]+v[R] > target){
			R--;
		}
		else if(v[L]+v[R] < target){
			L++;
		}
	}
	return {-1, -1};
}

void print(vector<int> v){
	for(auto &a: v){
		cout<<a<<" ";
	}
}
int main(){
	vector<int> test = {1, 2, 3, 4, 5, 6 ,7};
	third(test, 10);	
	return 0;
}

