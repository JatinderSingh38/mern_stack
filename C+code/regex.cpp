//regex
#include<iostream>
#include<string.h>
#include<regex>
using namespace std;
int CheckPassword(char str[],int n){
	regex pattern(R"(^(?!\d)(?=.*\d)(?=.*[A-Z])[^ /\n]{4,}$)");
	if(regex_search(str,pattern)){
	 return 1;
	 }else{
	 	return 0;
	 }
 }
int main(){
	char str[100];
	int n = strlen(str);
	cin>>str;
	cout<<CheckPassword(str,n)<<"\n";
}	

//Question 3: Password Checker
//(Asked in Accenture OnCampus 10 Aug 2022, Slot 3)
//
//You are given a function.
//int CheckPassword(char str[], int n);
//The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
//str is a valid password if it satisfies the below conditions.
//
//– At least 4 characters
//– At least one numeric digit
//– At Least one Capital Letter
//– Must not have space or slash (/)
//– Starting character must not be a number
//Assumption:
//Input string will not be empty.
//
//Example:
//
//Input 1:
//aA1_67
//Input 2:
//a987 abC012
//
//Output 1:
//1
//Output 2:
//0
//
   