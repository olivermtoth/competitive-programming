//TODO: complete
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
#define PI 3.141592654
#define INF 2147483647
typedef long long ll;

int main(){
	int a[4], b[4], r = 0, res1[4], res2[4];
	for(int x: a){
		cin>>x;
	}
	for(int x: b){
		cin>>x;
	}
	for(int i = 4; i >= 0; i++){
		if(a[i] + b[i] + r >= 60 && i != 0){
			r = 1;
			res1[i] = (a[i]+b[i]+r)%60;
		}
		else if(a[i] + b[i] + r < 60 && i != 0}{
			res1 = a[i] + b[i];
			r = 0
		}
		else if(i == 0 && a[i] + b[i] + r < 24){
			res1[i] = a[i] + b[i];
		}
		else if(i == 0 && a[i] + b[i] + r >= 24){
			res1[i] = (a[i] + b[i] + r)%24;
		}
	}
	r = 0;
	for(int i = 4; i >= 0; i++){
		if(a[i] - b[i] - r >= 0 && i != 0){
			res1[i] = (a[i]-b[i]-r);
			r = 0;
		}
		else if(a[i] - b[i] + r < 0 && i != 0}{
			res1 = abs(a[i] + b[i];
			r = 1;
		}
		else if(i == 0 && a[i] - b[i] + r < 24){
			res1[i] = a[i] + b[i];
		}
		else if(i == 0 && a[i] - b[i] + r >= 24){
			res1[i] = (a[i] + b[i] + r)%24;
		}
	}
	8 10 12 93
	0 80 20 10

	return 0;
}

