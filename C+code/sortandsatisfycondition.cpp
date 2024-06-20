#include<iostream>
#include<algorithm>
using namespace std;
int ProductSmallestPair(int sum,int arr[],int n){
	cout<<"sdsds";
	
   for(int i =0;i<n;i++){
    for(int j =0;j<n;j++){
    	int temp;
    	if(arr[j]>arr[i]){
	   	temp=arr[i];
	   	arr[i]=arr[j];
	   	arr[j]=temp;
	   	//i=0;
		  // cout<<"check"	;
     	}
     }	}


cout<<"sdsds\n";
int s1	= arr[0];
int s2	= arr[1];
if(s1+s2<=sum){
	return s1*s2;
}else{
	return -1;
}
	
	
	
}
int main(){
	int sum =9;
	int size = 7;
	int arr[size] ={5,2,4,3,9,7,1};
cout<<ProductSmallestPair(sum,arr,size);
}