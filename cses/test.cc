#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
	unordered_map<int ,bool> m = {{1, 0}, {2,0}};
	if(m.contains(3)){
		cout<<true;
	}
	else{
		cout<<false;
	}
}
