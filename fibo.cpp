#include <iostream>
#include <math.h>
using namespace std;
void fibo(int n){
int a=0;
int b=1;
    if (n >= 1) cout << a << " "<<endl; 
    if (n >= 2) cout << b << " "<<endl;
for(int i=2;i<n;i++){
    int temp=a+b;
     a=b;
     b=temp;
     cout<<temp<<" "<<endl;
}
}
int main(){
int d;
cin>>d;
fibo(d);
return 0;
}