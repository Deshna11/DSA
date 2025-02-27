#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
    int ans = 0, ans1 = 0, ans2 = 0, ans3=0;
   int a;
    switch(a){
        case 1:
        ans = n/100;
        cout<<"No. of notes of 100 is: "<<ans<<endl;
        n=n%100;
        
        case 2:
         ans1 = n/50;
        cout<<"No. of notes of 50 is: "<<ans1<<endl;
        n=n%50;
        
        case 3:
        ans2 = n/20;
        cout<<"No. of notes of 20 is: "<<ans2<<endl;
        n=n%20;
        
        case 4:
         ans3 = n/1;
        cout<<"No. of notes of 1 is: "<<ans3<<endl;
        break;
        
    }
   

    return 0;
}