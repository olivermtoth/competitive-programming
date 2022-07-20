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


int nthFib(int n){
    vector<int> v = {0, 1};
    for(int i = 2; i<n+1; i++){
        v[i] = v[i-1] + v[i-2];
    }
    return v[n];
}

int main(){
    cout
}