#include <iostream>
#include <math.h>
using namespace std; 
int main() {
   int i = 0, ans = 0;
   int n;
   cin >> n;
   cout << "Input binary number: " << n << endl;
    while (n != 0) { 
       int digit = n %10;
       if(digit==1){
       ans =  pow(2, i) + ans;}
       n=n/10;
       i++;
   }
   cout << ans;
   return 0;
}