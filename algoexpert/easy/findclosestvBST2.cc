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
	BST(int val);
	BST &insert(int val);
};

int closestInBSTHelper(BST *tree, int target, int closest){
	BST *currentNode = tree;
	while(currentNode != NULL){
		if(abs(closest-target) > abs(closest-tree->value)){
			closest = tree->value;
		}
		if(currentNode->value > target){
			currentNode = currentNode->left;
		}
		else if(currentNode->value < target){
			currentNode = currentNode->right;
		}
		else{
			break;
		}
		return closest;
	} 
}

int closestInBST(BST *tree, int target){
	return closestInBSTHelper(tree, target, INT_MAX);
}

int main(){
	return 0;
}