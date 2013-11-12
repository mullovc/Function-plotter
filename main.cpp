#include <iostream>
#include<cstdlib>

#include "custom geogebra.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) 
{
    system("color F0");
    while(true)
    {
		char input[100];
		
		for(int i = 0; i < 100; i++)
		{
			input[i] = ' ';
		}
		cout<<"\nf(x)=";
		cin.getline(input,99);
		
		
		setPreferences();
	    feldGenerator(input);
	    zeigeFeld();
	    
	    cin.get();
	    system("cls");
	}
	
	return 0;
}
