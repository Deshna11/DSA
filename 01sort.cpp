#include <iostream>
#include <math.h>
using namespace std; 
void sort(int arr[],int size){
    int i=0;
    int j=size-1;
    while (i<j){
     if(arr[i]==0){
        i++;
        continue;
     }
     if(arr[j]==1){
        j--;
        continue;
     }
     
       swap(arr[i],arr[j]);
        i++;
        j--;
       
     
     
    }
   for(int k=0;k<size;k++){
     cout<<arr[k];}
    
}
int main() {
int size;
cin>>size;
int array[size]; 
for(int i=0;i<size;i++){
    cin>>array[i];
}
sort(array,size);
return 0;
}