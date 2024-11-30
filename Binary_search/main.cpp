#include<iostream>
using namespace std;
int searchRec(int arr[], int start,int end, int num){
   int result=-99;
   if (start > end){
      result= -1;
   }
   if (arr[start] == num){
      result=start;
   }
   if (arr[end] == num){
      result=end;
   }
   if( result!=-99){
      return result;
   }
   return searchRec(arr, start + 1, end - 1, num);
}
int main(){
   int Arr[] = {11,43,22,56,33,26,78};
   int i;
   int len = sizeof(Arr) / sizeof(Arr[0]);
   int val ;
   cout<<"Enter element to be searched "<<endl;
   cin>>val;
   int pos = searchRec(Arr, 0, len - 1, val);
   if (pos == -1){
      cout<<val<<" is not present" ;
   }
   else{
      cout<<val<<" found at index "<<pos;
   }
   return 0;
}
