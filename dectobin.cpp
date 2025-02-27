#include <iostream>
#include <math.h>
using namespace std; 
int main() {
   int i = 0, ans = 0;
   int n;
   cin >> n;
    while ((n != 0)) { // Add extra parentheses here
       int bit = n & 1;
       ans = (bit * pow(10, i)) + ans;
       n = n >> 1;
       i++;
   }
   cout << ans;
   return 0;
}