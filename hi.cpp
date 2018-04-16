#include<iostream>
using namespace std;
void sum(a,b);	//Expand this piece of code 
{
int c;
c=a+b;
}//this piece is written by sajal sood
void multiply(a,b);
void divide(a,b);
{
	float c;
	c = a/b;
	cout<<c;
}
int main()
	
{
	int a,b,ch;
	cout<<"Enter the values of a and b";
	cin>>a>>b;
	cout<<"Enter the choice \n1) SUM\n2) MULTIPLY\n3) DIVIDE";
	cin>>ch;
	switch(ch)
	{
		case 1: 	sum(a,b);
				break;
		case 2:		multiply(a,b);
				break;
		case 3:		divide(a,b);
				break;
		default : cout<<"WRONG CHOICE!!!"
			  	break;
	}
	return 0;
}
