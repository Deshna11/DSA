#include <iostream>
using namespace std;
void swap(int arr[],int size ){
  
   for(int i=0;i<size-1;i++){  //size-1 is taken because loop should execute itself till 4 when 5 values in an array are taken to make sure last integer remains same
    if(i%2==0){
       int temp = arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
   }}
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
// for(int i=0;i<size;i++){
//     if(i+1<size){
//         swap(arr[i],arr[i+1]);
//     }
// }