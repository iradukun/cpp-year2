#include<iostream>
#include<array>
using namespace std;
int main(){
    int temp;
int arr[]={12,55,5,18};
for(int i=0;i<end(arr)-begin(arr);i++){
  for(int j=i+1;j<=2;j++){
    if(arr[j]<arr[i]){
     temp=arr[j];
     arr[i]=arr[j];
     arr[j]=temp;
    }
  }
}
cout<<temp;
    return 0;
}