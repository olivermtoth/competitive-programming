/*
ID: oliverm5
TASK: friday
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool ok(int y){
    if(y%100==0)   return(y%400==0);
    else    return(y%4==0);
}

int main(){
	ofstream fout("friday.out");
    ifstream fin("friday.in");

    string input;
    fin>>input;
    int period=atoi(input.c_str());

    int calendarDay=0;
    int freq[7]={0,0,0,0,0,0,0};
    int normDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int leapDays[12]={31,29,31,30,31,30,31,31,30,31,30,31};

    for(int year=1900; year<1900+period; year++){
        for(int month=0; month<12; month++){
            int weekday=(calendarDay+12)%7;
            freq[(weekday+2)%7]++;
            calendarDay += ok(year) ? leapDays[month]:normDays[month];
        }
    }

    for(int i=0; i<7; i++){
        fout<<freq[i];
        if(i==6) fout<<endl;
        else fout<<" ";
    }
    return 0;
}