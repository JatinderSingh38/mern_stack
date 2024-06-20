#include<iostream>
#include<cstring>
using namespace std;
char* dectoNbase(int n,int num){
   int Q=num/n;
   int rem[100];
    int i =0;
    rem[0]=num%n;
   cout<<Q;
   while(Q!=0){
	 num=Q;
	 Q=num/n;
	 i++;
	rem[i]=num%n;
	cout<<"while";
  }

cout<<rem[2];
}
int main(){
	int n= 12;
	int num = 718;
	char* result = dectoNbase(n,num);
//	if(result ! = nullptr)){
//		cout<<"converted number:"<<result<<endl;
//		delete[] result;
//		
//	}else{
//		cout<<"invalid base"<<endl;
//	}
	return 0;
	
}