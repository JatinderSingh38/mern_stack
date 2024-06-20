//sorting array
#include<iostream>
using namespace std;
int main(){
	int n = 7;
	int arr[n]={7,8,4,3,9,2,0};
	for(int i = 0;i<n;i++){
	for(int j = 0;j<n;j++){	
	int temp;
	if(arr[j]>arr[i]){
		temp= arr[i];
		arr[i]= arr[j];
		arr[j]=temp;
	}
    }
	}
	
	for(int i = 0;i<n;i++){
		cout<<arr[i];
	}
	
}