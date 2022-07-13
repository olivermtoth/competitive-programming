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
	int n;
	cin>>n;
	if(n==1)	cout<<1;
	else if(n<=3)	cout<<"NO SOLUTION";
	else{
		if(n%2 == 0){
			for(int i = 2; i<=n; i+=2){
				cout<<i<<" ";
			}
			for(int i = 1; i<n; i+=2){
				cout<<i<<" ";
			}
		}
		else{
			for(int i = 2; i<=n; i+=2){
				cout<<i<<" ";
			}
			for(int i = 1; i<=n; i+=2){
				cout<<i<<" ";
			}
		}
		
	}
	return 0;
}

