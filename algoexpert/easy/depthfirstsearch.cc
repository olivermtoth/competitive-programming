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
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

struct Node{
	string name;
	vector<Node *> children;
	Node(string name){
		this->name = name;
	}
	
	Node *addChild(string name){
		Node *child = new Node(name);
		children.push_back(child);
		return this;
	}

	vector<string> depthsearch(vector<string> *array){
	array->push_back(this->name);
	for(int i = 0; i < this->children.size(); i++){
		children[i]->depthsearch(array);	
	}
	return *array;
	}

};


int main(){
	
	return 0;
}

