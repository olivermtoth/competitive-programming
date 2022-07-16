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

bool classPhoto(vector<int> blue, vector<int> red){
	sort(red.begin(), red.end());
	sort(blue.begin(), blue.end());
	if(*red.end() > *blue.end()){
		for(int i = 0; i<(int)blue.size(); i++){
			if(red[i] < blue[i]){
				return false;
			}
		}
	}
	else if(*red.end() < *blue.end()){
		for(int i = 0; i<(int)blue.size(); i++){
			if(red[i] > blue[i]){
				return false;
			}
		}
	}
	else{
		int i = (int)blue.size()-1;
		while(true){
			if(blue[i] > red[i]){
				for(int j = i-1; i>=0; i--){
					if(red[j] < blue[j]){
						return false;
					}
				}
				break;
			}
			else if(red[i] > blue[i]){
				for(int j = i-1; i>=0; j--){
					if(red[j] > blue[j]){
						return false;
					}
				}
				break;
			}
			else{
				i--;
				continue;				
			}
		}
	}
	return true;
}

int main(){
	
	return 0;
}

