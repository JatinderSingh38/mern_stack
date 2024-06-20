//sorting odd even position find and add
#include<iostream>
using namespace std;
int LargeSmallsum(int arr[],int len){
    int cnt =0;
    int ct=0;
	cout<<"dnskd";
	int sl[len];
	int sso[len];
for(int i = 0;i<len;i++){
	cout<<"\n"<<arr[i];
	if(i%2==0){
		
		sl[cnt]=arr[i];
		cnt=cnt+1;
	
	}else{
	
		sso[ct]=arr[i];
		ct=ct+1;
	}	
  }

for(int j =0;j<cnt;j++){
//	cout<<sl[j]; sorting 315//sorting
	for(int i =0;i<cnt;i++){
	int temp;
	if(sl[i]>sl[j]){
	   	temp=sl[i];
	   	sl[i]=sl[j];
	   	sl[j]=temp;
	   	i=0;
		
	}
 }
}
cout<<'\n'<<"second largest even position "<<sl[cnt-2];

for(int j =0;j<ct;j++){
//	cout<<sl[j]; sorting 315
	for(int i =0;i<ct;i++){
	int temp;
	if(sso[i]>sso[j]){
	   	temp=sso[i];
	   	sso[i]=sso[j];
	   	sso[j]=temp;
	   	i=0;
		
	}
 }
}
cout<<'\n'<<"second smallest odd position "<<sso[1];

}
int main(){
	int len=6;
	int arr[len]={3,2,1,7,5,4};
	LargeSmallsum(arr,len);
}


//
//You are required to implement the following Function 
//
//def LargeSmallSum(arr)
//
//The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’
//
//Assumption:
//
//All array elements are unique
//Treat the 0th position as even
//NOTE
//
//Return 0 if array is empty
//Return 0, if array length is 3 or less than 3
//Example
//
//Input
//
//arr:3 2 1 7 5 4
//
//Output
//
//7
//
//Explanation
//
//Second largest among even position elements(1 3 5) is 3
//Second smallest among odd position element is 4
//Thus output is 3+4 = 7
//Sample Input
//
//arr:1 8 0 2 3 5 6
//
//Sample Output
//
//8