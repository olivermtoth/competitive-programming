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

//Binary tree class
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

void branchSumHelper(BT *node, int runningSum, vector<int> sums){
	if(node == NULL){
		return;
	}
	runningSum += node->value;
	if(node->left == NULL && node->right == NULL){
		sums.push_back(runningSum);
		return;
	}

	branchSumHelper(node->left,  runningSum, sums);
	branchSumHelper(node->right,  runningSum, sums);
	
}

vector<int> branchSum(BT *root){
	vector<int> sums;
	branchSumHelper(root, 0, sums);
	return sums;
}


typedef long long ll;

int main(){
	
	return 0;
}

