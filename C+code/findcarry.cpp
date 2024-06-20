#include <iostream>
using namespace std;
void NumberOfCarries(int num1 , int num2){
	int x;
	int y;
	int carry=0;
	while(num1!=0 && num2!=0){
	x = num1 % 10;
	num1 = num1/10;
	cout<<"x--"<<x<<"\n";
	y= num2 % 10;
	num2 = num2/10;	
	cout<<"y--"<<y<<"\n";
	
	if((x+y)>9)	
	carry=carry+1;
	};
	
	cout<<"crrry "<<carry<<"\n";
};
int main()
{
    int a = 234;
    int b = 999;
    NumberOfCarries(a,b);
    int d = a % 10 ;
  
    return 0;
}
