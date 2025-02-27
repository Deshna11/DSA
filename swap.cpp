#include <iostream>
using namespace std;
void swap(int arr[],int size ){
  
   for(int i=0;i<size/2;i++){
       int temp = arr[i];
       arr[i]=arr[size-i-1];
       arr[size-i-1]=temp;
   }
   cout<<"New array is : "<<endl;
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
}

int main() {
  int size;
  cin>>size;
  int array[size];
  for(int i=0;i<size;i++){
      cin>>array[i];
  }
 swap(array,size);
    return 0;
}


// one more logic:
// void reverse (int arr[],int n);{
// int start=0;
// int end =n-1;
// while(start<=end){
//     start++;
//     end--;
// }}