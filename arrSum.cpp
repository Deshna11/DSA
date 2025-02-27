#include <iostream>
#include <math.h>
using namespace std;
int summing(int arr[],int size){
 int sum=0;
 for(int i=0;i<size;i++){
     sum =sum+arr[i];
 }
 cout<<"The sum is: "<<sum;
 return sum;
}
int main() {
    int a;
    cin>>a;
    int array[a];
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
    summing(array,a);
    
    return 0;
}