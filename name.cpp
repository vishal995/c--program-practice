// read and write a first name
#include<iostream>
using namespace std;
int main()
{
	cout<<"Please enter your first name (followed by 'enter'):\n";
	string first_name;	//first name is a variable of type string
	cin>>first_name;	//read characters into first_name
	cout<<"Hello,"<<first_name<<"!\n";
}
