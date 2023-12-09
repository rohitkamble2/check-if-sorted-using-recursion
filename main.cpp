#include <iostream>
using namespace std;
bool isSorted(int arr[],int i, int n)
{
   //base case 
    if(i > n) 
    {
      return true;
    }
   if(arr[i] < arr[i-1])
     return false;

  return isSorted(arr, i+1, n);
    
}
int main() {
 int arr[] = {15, 25, 35, 45, 55, 65};
  int n = sizeof(arr)/sizeof(arr[0]);
 int i=0;

  if(isSorted(arr,i,n))
  {
    cout<<"Array is sorted";
  }
  else{
    cout<<"Array is not sorted";
  }
  return 0;
}