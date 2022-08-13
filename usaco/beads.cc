/*
ID: oliverm5
TASK: beads
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
   ofstream fout("beads.out");
   ifstream fin("beads.in");
   int N;
   fin >> N;
   string beads;
   fin >> beads;


   // brute-force all possibilities
   int cur = 0, M = 0;
   char color;
   bool switched;

   for (int i = 0; i < N; ++i) {
      // complexity O(n)
      cur = 0;
      switched = false;
      color = 'w';
      for (int j = 0; j < N; ++j) {
         // complexity O(n^2)
         const char cur_c = beads[(i + j) % N];
         // always take white beads
         if (cur_c != 'w') {
            // first non-white
            if (color == 'w') {
               color = cur_c;
            } else if (color != cur_c) {
               if (switched)
                  break;
               else {
                  color = cur_c;
                  switched = true;
               }
            }
         }
         ++cur;
      }
     M = max( cur, M);
   }

   fout << M << endl;
   return 0;
}