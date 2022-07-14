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

//Binary search tree class
struct BST{
	int value;
	BST *right;
	BST *left;
	BST(int val);
	BST &insert(int val);
};

int closestinBSThelper(BST *tree, int target, int closest){
	if(abs(closest-target) > abs(closest-tree->value)){
		closest = tree->value;
	}
	if(closest > target && tree->left != NULL){
		return closestinBSThelper(tree->left, target, closest);
	}
	else if(closest < target && tree->right != NULL){
		return closestinBSThelper(tree->right, target, closest);
	}
	return closest;
}

int closestinBST(BST *tree, int target){
	return closestinBSThelper(tree, target, INT_MAX);
}

int main(){
	
	return 0;
}

