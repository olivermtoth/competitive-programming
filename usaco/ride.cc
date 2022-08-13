/*
ID: oliverm5
TASK: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
typedef long long int ll;
using namespace std;

int sum(string s){
    int x = 0;
    for(char a: s){
        x += 65 - a + 1;
    }
    return x;
}

int main(){
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string c, g;
    ll a= 1, b = 1;
    fin >> c >> g;
    for(char x: c){
        a *=x-'A'+1;
    }
    for(char x: g){
        b *= x-'A'+1;
    }
    fout<<(a%47==b%47?"GO":"STAY")<<endl;
    return 0;
}