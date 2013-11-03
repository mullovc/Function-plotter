#include<iostream>
#include<string>
#include "calculator.hpp"
#include<cstdlib>
using namespace std;

int main()
{
    system("color F0");
    
	char input[100];
	
	for(int i = 0; i < 100; i++)
	{
		input[i] = ' ';
	}
	cout<<"\nf(x)=";
	cin.getline(input,99);
	
	cout<<"\n= "<<analyzer(input);
	
	cin.get();
	return 0;
}
