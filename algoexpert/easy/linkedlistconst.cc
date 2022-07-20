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

struct Node{
	int value;
	Node *previous;
	Node *next;
	Node(int value);
};

struct DLL{
	Node *head;
	Node *tail;
	
	DLL(){
		head = NULL;
		tail = NULL;
	}

	// Time O(1); Space O(1)
	void setHead(Node *node){
		if(head == NULL){
			head = node;
			tail = node;
			return;
		}
		insertBefore(head, node);
	}

	// Time O(1); Space O(1)
	void setTail(Node *node){
		if(tail == NULL){
			setHead(node);
			return;
		}
		insertAfter(tail, node);
	}
	
	// Time O(1); Space O(1)
	void insertBefore(Node *node, Node *nodeToInset){
		if(nodeToInset == head && nodeToInset == tail){
			return;
		}
		remove(nodeToInset);
		nodeToInset->previous = node->previous;
		nodeToInset->next = node;
		if(node->previous == NULL){
			head = nodeToInset;
		}
		else if (nodeToInset->next == NULL) {
			tail = nodeToInset;
		}
		node->previous = nodeToInset;

	}

	// Time O(1); Space O(1)
	void insertAfter(Node *node, Node *nodeToInset){
		if(nodeToInset == head && nodeToInset == tail){
			return;
		}
		remove(nodeToInset);
		nodeToInset->previous = node;
		nodeToInset->next = node->next;
		if(node->next == NULL){
			tail = nodeToInset;
		}
		else if(nodeToInset->previous == NULL){
			head = nodeToInset;
		}
	}


	void insertAtPosition(int position, Node *node){
		int counter = 0;
		Node* currentNode = head;
		for(int i = 0; i<position; i++){
			currentNode = currentNode->next;
			if(currentNode == NULL){
				return;
			}
		}
		insertAfter(currentNode, node);
	}

	void removeNodesWithValue(int targetValue){
		Node* node = head; 
		while(node != NULL){
			if(node->value == targetValue){
				Node* NodeToRemove = node;
				node = node->next;
				if(NodeToRemove->value == targetValue){
					remove(NodeToRemove);
				}
			}
		}
	}

	void remove(Node *node){
		if(node == head){
			head = head->next;
		}
		if(node == tail){
			tail = tail->previous;
		}
		removeNodeBindings(node);
	}

	void removeNodeBindings(Node *node){
		// Set new connections. 
		if(node->previous != NULL){
			node->previous->next = node->next;
		}
		else if(node->next != NULL){
			node->next->previous = node->previous;
		}
		// Remove connections.
		node->previous = NULL; 
		node->next = NULL;
	}

};
