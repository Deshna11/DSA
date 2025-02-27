#include <iostream>
using namespace std;
void unique(int arr[],int N ){
    int ans=0;
  for(int i=0;i<N;i++){
    ans=ans^arr[i];
  
 
}
cout<<"Unique number is: "<<ans;}

int main() {
 int size;
 cin>>size;
 int array[size];
 for(int i=0;i<size;i++){
     cin>>array[i];
 }
 unique(array,size);
    return 0;
}