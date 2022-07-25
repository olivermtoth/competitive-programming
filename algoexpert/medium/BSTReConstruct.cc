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
#define PI 3.141592654
#define INF 2147483647

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


