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

bool validateBSTHelper(BST *node, int MIN, int MAX){
	if(node->value > MAX || node->value < MIN){
		return false;
	}
	else if(node->left != NULL && !validateBSTHelper(node->left, MIN, node->value)){
		return false;
	}
	else if (node->right != NULL && !validateBSTHelper(node->right, node->value, MAX)) {
		return false;
	}
	return true;
}

bool validateBST(BST *tree){
	return validateBSTHelper(tree, INT32_MIN, INT32_MAX);
}
