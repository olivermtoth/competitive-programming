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

void InOrderHelper(BST *node, vector<int> res){
	if(node->left != NULL && node->right != NULL){
		InOrderHelper(node->left, res);
		res.push_back(node->value);
		InOrderHelper(node->right, res);
	}
	else if(node->left == NULL){
		res.push_back(node->value);
		InOrderHelper(node->right, res);
	}
	else if(node->right == NULL){
		InOrderHelper(node->left, res);
	}

}


vector<int> InOrder(BST *tree){
	vector<int> res;
	InOrderHelper(tree->left, res);
	res.push_back(tree->value);
	InOrderHelper(tree->right, res);
	return res;
}


void PreOrderHelper(BST *node, vector<int> res){
	res.push_back(node->value);
	if(node->left != NULL && node->right != NULL){
		PreOrderHelper(node->left, res);
		PreOrderHelper(node->right, res);
	}
	else if(node->right == NULL){
		PreOrderHelper(node->left, res);
	}
	else if(node->left == NULL){
		PreOrderHelper(node->right, res);
	}
	
}


vector<int> PreOrder(BST *tree){
	vector<int> res;
	res.push_back(tree->value);
	PreOrderHelper(tree->left, res);
	PreOrderHelper(tree->right, res);
	return res;
}

void PostOrderHelper(BST *node, vector<int> res){
	if(node->left != NULL){
		PostOrderHelper(node->left, res);
	}
	if(node->right != NULL){
		PostOrderHelper(node->right, res);
	}
	res.push_back(node->value);
}

vector<int> PostOrder(BST *tree){
	vector<int>res;
	PostOrderHelper(tree->left, res);
	PostOrderHelper(tree->right, res);
	res.push_back(tree->value);
	return res;
}