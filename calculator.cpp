#include<string>
#include<sstream>

#include "MyMath.h"
#include "calculator.h"

using namespace std;

 double stringToDouble(string s)
 {
   istringstream i(s);
   double x;
   if (!(i >> x))
     return 0;
   return x;
 }
 
 string doubleToString(double d)
 {
 	
 	stringstream a;
	a << d;
	string b = a.str();
 	
 	return b;
 }
 
 bool checkForOperator(char op)
 {
 	if(op == '+'
	|| op == '-'
	|| op == '*'
	|| op == '/'
	|| op == '('
	|| op == ')'
	|| op == '%'
	|| op == '^'
	|| op == 'x')
	{
		return true;
	}
	else
	{
		return false;
	}
 }
 
 bool checkForOperator(string op)
 {
 	if(op == "+"
	|| op == "-"
	|| op == "*"
	|| op == "/"
	|| op == "("
	|| op == ")"
	|| op == "%"
	|| op == "^"
	|| op == "x")
	{
		return true;
	}
	else
	{
		return false;
	}
 }
 
 double searchForNumber(char a[30])
 {
 	/*char b[30];
 	int marker = 0;
 	int i = 0;
 	while(a[i] != ')')
 	{
 		if(a[i] == '(')
 		{
 			i++;
 			marker = i;
 		}
 		if(marker != 0)
 		{
 			b[i - marker] = a[i];
 		}
 		i++;
 	}
 	string c = b;
 	return stringToDouble(c);*/
 }
 
 string detectSpecialOperator(char op[30])
 {
 	if(op[0] == 's' && op[1] == 'q' && op[2] == 'r' && op[3] == 't')
 	{
 		return "sqrt";
 	}
 	else if(op[0] == 'n' && op[1] == 'r' && op[2] == 't')
 	{
 		return "nrt";
 	}
	else if(op[0] == 's' && op[1] == 'i' && op[2] == 'n')
	{
 		return "sin";
	}
 	else if(op[0] == 'c' && op[1] == 'o' && op[2] == 's')
 	{
 		return "cos";
 	}
 	else if(op[0] == 't' && op[1] == 'a' && op[2] == 'n')
 	{
 		return "tan";
 	}
 	else
 	{
 		return "";
 	}
 }

 double calculate(string segments[30], double x)
 {
 	{
	 	int i = 0;
	 	while(i < 30 && segments[i] != ")")
	 	{
	 		if(segments[i] == "(")
	 		{
	 			string segments2[30];
	 			int j = i + 1;
	 			int openBrackets = 0;
	 			while(true)
	 			{
	 				segments2[j - i - 1] = segments[j];
	 				
	 				j++;
	 				
	 				if(segments[j] == ")" && openBrackets == 0)
	 				{
	 					break;
	 				}
	 				else if(segments[j] == ")" && openBrackets > 0)
	 				{
	 					openBrackets--;
	 				}
	 				else if(segments[j] == "(")
	 				{
	 					openBrackets++;
	 				}
	 				
	 			}
	 			
	 			segments[i] = doubleToString(calculate(segments2, x));
	 			
	 			for(int k = i + 1; k < 30 - j + i; k++)
	 			{
	 				segments[k] = segments[k + j - i];
	 			}
	 		}
	 		i++;
	 	}
 	}
	
	for(int p = 0; p <= 4; p++)
	{
		for(int i = 0; i < 30; i++)
		{
			int shift[2] = {0,0};
			
			if(segments[i] == "x")
			{
				segments[i] = doubleToString(x);
			}
			
			if(segments[i] == "sqrt" && p == 1)
			{
				segments[i] = doubleToString(sqrt(stringToDouble(segments[i + 1])));
				shift[0] = 1;
				shift[1] = 2;
			}
			else if(segments[i] == "sin" && p == 1)
			{
				segments[i] = doubleToString(sin(stringToDouble(segments[i + 1])));
				shift[0] = 1;
				shift[1] = 2;
			}
			else if(segments[i] == "cos" && p == 1)
			{
				segments[i] = doubleToString(cos(stringToDouble(segments[i + 1])));
				shift[0] = 1;
				shift[1] = 2;
			}
			else if(segments[i] == "tan" && p == 1)
			{
				segments[i] = doubleToString(tan(stringToDouble(segments[i + 1])));
				shift[0] = 1;
				shift[1] = 2;
			}
			else if(segments[i] == "nrt" && p == 1)
			{
				segments[i - 1] = doubleToString(nrt(stringToDouble(segments[i + 1]),stringToDouble(segments[i - 1])));
				shift[0] = 0;
				shift[1] = 2;
			}
			else if(segments[i] == "^" && p == 2)
			{
				segments[i - 1] = doubleToString(pow(stringToDouble(segments[i - 1]),stringToDouble(segments[i + 1])));
				shift[0] = 0;
				shift[1] = 2;
			}
			else if(segments[i] == "/" && p == 3)
			{
				segments[i - 1] = doubleToString(stringToDouble(segments[i - 1]) / stringToDouble(segments[i + 1]));
				shift[0] = 0;
				shift[1] = 2;
			}
			else if(segments[i] == "*" && p == 3)
			{
				segments[i - 1] = doubleToString(stringToDouble(segments[i - 1]) * stringToDouble(segments[i + 1]));
				shift[0] = 0;
				shift[1] = 2;
			}
			else if(segments[i] == "-" && p == 4)
			{
				segments[i - 1] = doubleToString(stringToDouble(segments[i - 1]) - stringToDouble(segments[i + 1]));
				shift[0] = 0;
				shift[1] = 2;
			}
			else if(segments[i] == "+" && p == 4)
			{
				segments[i - 1] = doubleToString(stringToDouble(segments[i - 1]) + stringToDouble(segments[i + 1]));
				shift[0] = 0;
				shift[1] = 2;
			}
			
			if(shift[1] > 0)
			{
				for(int j = i; j < 30 - shift[1]; j++)
				{
					segments[j + shift[0]] = segments[j + shift[1]];
				}
				i = 0;
			}
		}
	}
 	return stringToDouble(segments[0]);
 }
 
double analyzer(char formula[100], double x = 0)
{
	string segments[30];
	
	int markerPos = 0;
	for(int i = 0; i < 30; i++)
	{
		int j = markerPos;
		while(formula[markerPos] != ' ')
		{
			if(formula[j] == ' ')
			{
				char segmentChar[30];
				for(int k = 0; k <= 30; k++)
				{
					segmentChar[k] = ' ';
				}
				
				for(int k = markerPos; k < j; k++)
				{
					segmentChar[k - markerPos] = formula[k];
				}
				
				if(checkForOperator(segmentChar[0]))
				{
					segments[i] = segmentChar[0];
				}
				else if(detectSpecialOperator(segmentChar) != "")
				{
					segments[i] = detectSpecialOperator(segmentChar);
				}
				else
				{
					segments[i] = segmentChar;
					double a = stringToDouble(segments[i]);
					segments[i] = doubleToString(a);
				}
				
				markerPos = j + 1;
				break;
			}
			j++;
		}
	}
	return calculate(segments, x);
}
