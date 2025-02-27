#include <iostream>
#include <math.h>
using namespace std; 
int main() {
   int i = 0, ans = 0;
   int n;
   cin >> n;
  
   if(n>0){
    while ((n != 0)) { 
       int bit = n & 1;
       ans = (bit * pow(10, i)) + ans;
       n = n >> 1;
       i++;
   }
   cout << ans;}
   if(n<0){
      while ((n != 0)) { 
       int bit = n & 1;
       ans = (bit * pow(10, i)) + ans;
       n = n >> 1;
       i++;
   }
    ans=ans^1+1;
    cout<<ans;
   }
   return 0;
}