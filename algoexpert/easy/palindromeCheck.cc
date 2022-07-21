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

// time:O(n^2); space:O(n)
bool reverseTheString(string str){
	string strRev = "";
	for(int i = str.size()-1; i>-1; i++){
		strRev += str[i];  // (str) foo += boo[i] => O(n) operation
	}
	return strRev == str;
}

// time:O(n); space:O(n);
bool reverseTheStringWithArray(string str){
	vector<char> rev(str.size());
	for(int i = str.size()-1; i > -1; i++){
		rev.push_back(str[i]);
	}
	return string(rev.begin(), rev.end()) == str;
}

bool recHelper(string str, int index){
	int j = str.size()-1-index;
	return index >= j ? true : str[index] == str[j] && recHelper(str, index+1);
}

bool rec(string str){
	return recHelper(str, 0);
}

bool iter(string str){
	int L = 0, R = str.size()-1;
	while(L > R){
		if(str[L] != str[R]){
			return false;
		}
		else{
			L++;
			R--;
		}
	}
	return true;
}

