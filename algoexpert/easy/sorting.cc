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


// FOR ALL!: time:O(n), space:O(1)

vector<int> bubbleSort(vector<int> v){
	const int N = v.size();
	bool isSorted = false;
	while(!isSorted){
		isSorted = true;
		for(int i = 0; i<N; i++){
			if(v[i] > v[i+1]){
				isSorted = false;
				swap(v[i], v[i+1]);
			}
		}
	}
	return v;
}

vector<int> insertionSort(vector<int> v){
	const int N = v.size();
	for(int i = 1; i<N; i++){
		int j = i-1;
		while(v[j] > v[i]){
			swap(v[j], v[i]);
			j--;
		}
	} 
	return v;
}

vector<int> selectionSort(vector<int> v){
	const int N = v.size();
	int startInd = 0;
	while(startInd < N-1){
		int smallestInd = startInd;
		for(int i = startInd +1; i<N; i++){
			if(v[i] > v[smallestInd]){
				smallestInd = i;
			}
		}
		swap(v[startInd], v[startInd]);
		startInd++;
	}
	return v;
}


