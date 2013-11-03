#include<iostream>
//#include<string>
//#include<sstream>
#include<fstream>
#include<cstdlib>
#include "calculator.hpp"
using namespace std;

string feld[1000][1000];
int dimensionen = 299;
float zoom = 0.1;

void feldGenerator(char input[100])
{
     for(int i=dimensionen-1;i>=0;i--)
     {
             for(int j=0;j<dimensionen;j++)
             {
                     string zeichen=" ";
                     if(i==dimensionen/2)
                     zeichen="-";
                     if(j==dimensionen/2)
                     zeichen="|";
                     if(j==dimensionen-1)
                     zeichen="\n";
                     
                     feld[j][i]=zeichen;
             }
     }
     
     double previousF = dimensionen;
     for(int i=0;i<dimensionen-1;i++)
     {
             double x=(int)i-dimensionen/2;
             
             x=x*zoom;
             
             float f = analyzer(input,x);
             
             f=f/zoom;
             
             x=x+dimensionen/2;
             f=f+dimensionen/2;
             
             if(f > previousF && i > 0)
             {
             	for(int j = previousF + 1; j < f; j++)
             	{
		             if(j>=0 && j<dimensionen)
		             	feld[i][(int)j]="X";
             	}
             }
             else if(f < previousF && i > 0)
             {
             	for(int j = previousF - 1; j > f; j--)
             	{
		             if(j>=0 && j<dimensionen)
		             	feld[i][(int)j]="X";
             	}
             }
             	
             if(f>=0 && f<dimensionen)
             	feld[i][(int)f]="X";
             
             //if(f>=0 && f<dimensionen)
             	previousF = f;/*
            else if(f > dimensionen)
            	previousF = dimensionen;
            else if(f < 0)
            	previousF = 0;*/
     }
}

void zeigeFeld()
{
     for(int i=dimensionen-1;i>=0;i--)
     {
             for(int j=0;j<dimensionen;j++)
             {
                     cout<<feld[j][i][0];
             }
     }
}

void setPreferences()
{
	ifstream prefs;
    prefs.open("preferences.txt");
    
    string dimensionenStr;
    string zoomStr;
    
    getline(prefs, dimensionenStr);
    getline(prefs, zoomStr);
    
    if(zoomStr != "" || dimensionenStr != "")
    {
	    dimensionen = (int)stringToDouble(dimensionenStr);
	    zoom = stringToDouble(zoomStr);
    }
    
    prefs.close();
}

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
	
	setPreferences();
    feldGenerator(input);
    zeigeFeld();
    
    cin.get();
    return 0;
}
