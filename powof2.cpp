#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    bool a=false;
    cin>>n;
    for(int i=0;i<31;i++){
if(pow(2,i)==n){
   a = true;
   break;
}
}
if(a){
    cout<<"True";
}
else{
    cout<<"False";
}

    return 0;
}