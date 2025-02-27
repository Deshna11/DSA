#include <iostream>
using namespace std;
int count(int n){
   int i=0;
    while(n!=0){
       int bit = n&1;
       if(bit==1){
           i++;
           
           
       }
      n=n>>1;
   }
    return i;
}

int main() {
  int a,b;
  cin>>a>>b;
  int c = count(a);
  int d = count(b);
  cout<<"NO. of set bits is "<<c+d;

    return 0;
}