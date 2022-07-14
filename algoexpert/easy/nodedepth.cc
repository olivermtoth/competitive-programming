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

struct BT{
	int value;
	BT *left;
	BT *right;
	
	BT(int value){
		this->value = value;
		left = NULL;
		right = NULL;
	}
};

int nodeDepthHelper(BT *node, int currentDepth){
	if(!node){
		return 0;
	}
	return currentDepth + nodeDepthHelper(node->left, currentDepth+1) + nodeDepthHelper(node->right, currentDepth+1);
	
}

int nodeDepth(BT *tree){
	return nodeDepthHelper(tree, 0);
}


int main(){
	
	return 0;
}

