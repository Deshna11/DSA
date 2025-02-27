#include <iostream>
#include <math.h>
using namespace std; 
void getMax(int arr[],int size){
    
    int maxi=INT_MIN;

    for (int i=0;i<size;i++){
    // if(arr[i]>maxi){
    //     maxi=arr[i];
    // }
    maxi = max(maxi,arr[i]);
    }
    cout<<"Max number is : "<<maxi;
}
int main() {
int size;
cin>>size;
int array[size];
for (int i=0;i<size;i++){
        cin>>array[i];
    }
    getMax(array,size);
    return 0;
}