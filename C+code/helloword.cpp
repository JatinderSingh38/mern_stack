//#include <iostream>
//using namespace std;
//void NumberOfCarries(int num1 , int num2){
//	int x;
//	int y;
//	int carry=0;
//	while(num1!=0 && num2!=0){
//	x = num1 % 10;
//	num1 = num1/10;
//	cout<<"x--"<<x<<"\n";
//	y= num2 % 10;
//	num2 = num2/10;	
//	cout<<"y--"<<y<<"\n";
//	
//	if((x+y)>9)	
//	carry=carry+1;
//	};
//	
//	cout<<"crrry "<<carry<<"\n";
//};
//int main()
//{
//    int a = 234;
//    int b = 999;
//    NumberOfCarries(a,b);
//    int d = a % 10 ;
//  
//    return 0;
//}
#include <iostream>

using namespace std;

int numberOfCarries (int num1, int num2)
{
  int carry = 0, sum, p, q, count = 0;
  while ((num1 != 0) && (num2 != 0))
    {
      p = num1 % 10;
      q = num2 % 10;
      sum = carry + p + q;
      if (sum > 9)
	{
	  carry = 1;
	  count++;
	}
      else
	{
	  carry = 0;
	}
      num1 = num1 / 10;
      num2 = num2 / 10;
    }
  while (num1 != 0)
    {
      p = num1 % 10;
      sum = carry + p;
      if (sum > 9)
	{
	  carry = 1;
	  count++;
	}
      else
	{
	  carry = 0;
	}
      num1 = num1 / 10;
    }
  while (num2 != 0)
    {
      q = num2 % 10;
      sum = carry + q;
      if (sum > 9)
	{
	  carry = 1;
	  count++;
	}
      else
	{
	  carry = 0;
	}
      num2 = num2 / 10;
    }
  return count;
}

int main ()
{
  int x, y, a;
  cin >> x >> y;
  a = numberOfCarries (x, y);
  cout << a;
  return 0;
}