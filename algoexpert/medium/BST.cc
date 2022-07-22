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
		value=val;
		left = NULL;
		right = NULL;
	}

	BST &insert(int value){
		if(this->value > value){
			if(left == NULL){
				BST *newBST = new BST(value);
				left = newBST;
			}
			else{
				left->insert(value);
			}
		}
		else{
			if(right == NULL){
				BST *newBST = new BST(value);
				right = newBST;
			}
			right->insert(value);
		}
		return *this;
	}

	bool contains(int value){
		if(this->value > value){
			if(left == NULL){
				return false;
			}
			else{
				left->contains(value);
			}
		}
		else if(this->value < value){
			if(right == NULL){
				return false;
			}
			else{
				right->contains(value);
			}
		}
		return true;

	}

	BST &remove(int val, BST *parent=NULL){
		if(val < value){
			if(left != NULL){
				left->remove(value, this);
			}
		}
		else if(val > value){
			if(right != NULL){
				right->remove(value, this);
			}
		}
		else{
			if(left != NULL && right != NULL){
				value = right->getMinValue();
				right->remove(value, this);
			}
			else if(parent == NULL){
				if(left != NULL){
					value = left->value;
					right = left->right;
					left = left->left;
				}
				else if(right != NULL){
					value = right->value;
					right = right->right;
					left = left->left;
				}
			}
			else if(parent->left == this){
				parent->left = left != NULL ? left : right;
			}
			else if(parent->right == this){
				parent->right = right != NULL? left : right;
			}
		}
		return *this;
	}

	// time:O(log(n)); space:O(1)
	int getMinValue(){
		if(left == NULL){
			return value;
		}
		else{
			return left->getMinValue();
		}
	}
	
};
