/*
Name: Naman Rawal
Roll No. : 2010990471
Set Name : 04
Question No. : 2
*/

#include<bits/stdc++.h>
using namespace std;

bool checkCons(int arr[],int n){
  sort(arr,arr+n);
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]+1){
    	cout<<"The array does not contain consecutive integer as element "<<arr[i]<<" is repeated";
      return false;
      
      }
  }
  return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  if(checkCons(arr,n)==true){
    cout<<"The array contains consecutive integrs from "<<arr[0]<<" to "<< arr[n-1]<<".";
  }
  else
    cout<<".";

    return 0;
}