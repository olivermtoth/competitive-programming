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

int main(){
	int a[4][2];
	for(int i = 0; i<4; i++){
		for(int j = 0; j<2; j++){
			cin>>a[i][j];
		}
	}
	cout<<a[0][1]-a[0][0]<<endl<<a[1][1]-a[1][0]+a[0][1]-a[0][0]<<endl<<a[2][1]-a[2][0]+a[1][1]-a[1][0]+a[0][1]-a[0][0];
    return 0;
}

