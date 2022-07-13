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
	string s;
	cin>>s;
	int ans = 0, temp = 0;
	char t = 'A';
	for(char a: s){
		if(a == t){
			temp++;
		}
		else{
			t = a;
			ans = max(temp, ans);
			temp = 1;
		}
	}
	ans = max(temp, ans);
	cout<<ans;
	return 0;
}

