#include <iostream>
#include <math.h>
using namespace std;
int fact(int n){
    if (n == 0 || n == 1) {
        return 1;
    }
    else{
    return n*fact(n-1);
}}
int ncr(int n,int r){
    int temp = fact(r)*fact(n-r);
    return fact(n)/temp;
}
int main() {
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    
    return 0;
}