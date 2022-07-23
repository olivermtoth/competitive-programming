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

struct BST{
	int value;
	BST *left;
	BST *right;
	BST(int val){
		value = val;
		left = NULL;
		right = NULL;
	}
};

