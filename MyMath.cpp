#include "MyMath.h"


double pow(double basis, float x)
{
	   double zoom = 1;
       double ergebnis=1;
       if((int)x==x)
       {
             if(x<0)
             {
                      for(int i=0;i>x;i--)
                      {
                             ergebnis=ergebnis/basis;
                      }
             }
             else if(x>0)
             {
                      for(int i=0;i<x;i++)
                      {
                             ergebnis=ergebnis*basis;
                      }
             }
       }
       else
       {
             ergebnis=nrt(pow(basis,(x*(1/zoom))),(int)(1/zoom));
       }
    	return ergebnis;
}

float sin(float i)
{
            bool negativ=false;
            bool groesserPI=false;
            bool groesserPIhalbe=false;
            
            float x=i*10000;
            
            if(x<0)
            {
                   negativ=true;
                   x=x*(-1);
            }
            
            float xScoped=(int)x%(int)(2*PI*10000);
            xScoped=xScoped*0.0001;
            
            if(xScoped>PI)
            {
                    groesserPI=true;
                    xScoped=xScoped-PI;
            }
            
            if(xScoped>PI/2)
            {
                    groesserPIhalbe=true;
                    xScoped=PI-xScoped;
            }
            
            float f;
            switch((int)(xScoped*100))
            {
                    case 0:
                         f=0;
                         break;
                    case 1:
                         f=0.00999983333;
                         break;
                    case 2:
                         f=0.0199986667;
                         break;
                    case 3:
                         f=0.0299955002;
                         break;
                    case 4:
                         f=0.0399893342;
                         break;
                    case 5:
                         f=0.0499791693;
                         break;
                    case 6:
                         f=0.0599640065;
                         break;
                    case 7:
                         f=0.0699428473;
                         break;
                    case 8:
                         f=0.079914694;
                         break;
                    case 9:
                         f=0.0898785492;
                         break;
                    case 10:
                         f=0.0998334166;
                         break;
                    case 11:
                         f=0.109778301;
                         break;
                    case 12:
                         f=0.119712207;
                         break;
                    case 13:
                         f=0.129634143;
                         break;
                    case 14:
                         f=0.139543115;
                         break;
                    case 15:
                         f=0.149438132;
                         break;
                    case 16:
                         f=0.159318207;
                         break;
                    case 17:
                         f=0.169182349;
                         break;
                    case 18:
                         f=0.179029573;
                         break;
                    case 19:
                         f=0.188858895;
                         break;
                    case 20:
                         f=0.198669331;
                         break;
                    case 21:
                         f=0.2084599;
                         break;
                    case 22:
                         f=0.218229623;
                         break;
                    case 23:
                         f=0.227977524;
                         break;
                    case 24:
                         f=0.237702626;
                         break;
                    case 25:
                         f=0.247403959;
                         break;
                    case 26:
                         f=0.257080552;
                         break;
                    case 27:
                         f=0.266731437;
                         break;
                    case 28:
                         f=0.276355649;
                         break;
                    case 29:
                         f=0.285952225;
                         break;
                    case 30:
                         f=0.295520207;
                         break;
                    case 31:
                         f=0.305058636;
                         break;
                    case 32:
                         f=0.314566561;
                         break;
                    case 33:
                         f=0.324043028;
                         break;
                    case 34:
                         f=0.333487092;
                         break;
                    case 35:
                         f=0.342897807;
                         break;
                    case 36:
                         f=0.352274233;
                         break;
                    case 37:
                         f=0.361615432;
                         break;
                    case 38:
                         f=0.370920469;
                         break;
                    case 39:
                         f=0.380188415;
                         break;
                    case 40:
                         f=0.389418342;
                         break;
                    case 41:
                         f=0.398609328;
                         break;
                    case 42:
                         f=0.407760453;
                         break;
                    case 43:
                         f=0.416870802;
                         break;
                    case 44:
                         f=0.425939465;
                         break;
                    case 45:
                         f=0.434965534;
                         break;
                    case 46:
                         f=0.443948107;
                         break;
                    case 47:
                         f=0.452886285;
                         break;
                    case 48:
                         f=0.461779176;
                         break;
                    case 49:
                         f=0.470625888;
                         break;
                    case 50:
                         f=0.479425539;
                         break;
                    case 51:
                         f=0.488177247;
                         break;
                    case 52:
                         f=0.496880138;
                         break;
                    case 53:
                         f=0.505533341;
                         break;
                    case 54:
                         f=0.514135992;
                         break;
                    case 55:
                         f=0.522687229;
                         break;
                    case 56:
                         f=0.531186198;
                         break;
                    case 57:
                         f=0.539632049;
                         break;
                    case 58:
                         f=0.548023937;
                         break;
                    case 59:
                         f=0.556361023;
                         break;
                    case 60:
                         f=0.564642473;
                         break;
                    case 61:
                         f=0.57286746;
                         break;
                    case 62:
                         f=0.581035161;
                         break;
                    case 63:
                         f=0.589144758;
                         break;
                    case 64:
                         f=0.597195441;
                         break;
                    case 65:
                         f=0.605186406;
                         break;
                    case 66:
                         f=0.613116852;
                         break;
                    case 67:
                         f=0.620985987;
                         break;
                    case 68:
                         f=0.628793024;
                         break;
                    case 69:
                         f=0.636537182;
                         break;
                    case 70:
                         f=0.644217687;
                         break;
                    case 71:
                         f=0.651833771;
                         break;
                    case 72:
                         f=0.659384672;
                         break;
                    case 73:
                         f=0.666869635;
                         break;
                    case 74:
                         f=0.674287912;
                         break;
                    case 75:
                         f=0.68163876;
                         break;
                    case 76:
                         f=0.688921445;
                         break;
                    case 77:
                         f=0.696135239;
                         break;
                    case 78:
                         f=0.703279419;
                         break;
                    case 79:
                         f=0.710353272;
                         break;
                    case 80:
                         f=0.717356091;
                         break;
                    case 81:
                         f=0.724287174;
                         break;
                    case 82:
                         f=0.73114583;
                         break;
                    case 83:
                         f=0.737931371;
                         break;
                    case 84:
                         f=0.74464312;
                         break;
                    case 85:
                         f=0.751280405;
                         break;
                    case 86:
                         f=0.757842563;
                         break;
                    case 87:
                         f=0.764328937;
                         break;
                    case 88:
                         f=0.770738879;
                         break;
                    case 89:
                         f=0.777071748;
                         break;
                    case 90:
                         f=0.78332691;
                         break;
                    case 91:
                         f=0.78950374;
                         break;
                    case 92:
                         f=0.79560162;
                         break;
                    case 93:
                         f=0.801619941;
                         break;
                    case 94:
                         f=0.8075581;
                         break;
                    case 95:
                         f=0.813415505;
                         break;
                    case 96:
                         f=0.819191568;
                         break;
                    case 97:
                         f=0.824885713;
                         break;
                    case 98:
                         f=0.83049737;
                         break;
                    case 99:
                         f=0.836025979;
                         break;
                    case 100:
                         f=0.841470985;
                         break;
                    case 101:
                         f=0.846831845;
                         break;
                    case 102:
                         f=0.852108022;
                         break;
                    case 103:
                         f=0.857298989;
                         break;
                    case 104:
                         f=0.862404227;
                         break;
                    case 105:
                         f=0.867423226;
                         break;
                    case 106:
                         f=0.872355482;
                         break;
                    case 107:
                         f=0.877200504;
                         break;
                    case 108:
                         f=0.881957807;
                         break;
                    case 109:
                         f=0.886626914;
                         break;
                    case 110:
                         f=0.89120736;
                         break;
                    case 111:
                         f=0.895698686;
                         break;
                    case 112:
                         f=0.900100442;
                         break;
                    case 113:
                         f=0.904412189;
                         break;
                    case 114:
                         f=0.908633496;
                         break;
                    case 115:
                         f=0.91276394;
                         break;
                    case 116:
                         f=0.916803109;
                         break;
                    case 117:
                         f=0.920750598;
                         break;
                    case 118:
                         f=0.924606012;
                         break;
                    case 119:
                         f=0.928368967;
                         break;
                    case 120:
                         f=0.932039086;
                         break;
                    case 121:
                         f=0.935616002;
                         break;
                    case 122:
                         f=0.939099356;
                         break;
                    case 123:
                         f=0.942488802;
                         break;
                    case 124:
                         f=0.945783999;
                         break;
                    case 125:
                         f=0.948984619;
                         break;
                    case 126:
                         f=0.952090342;
                         break;
                    case 127:
                         f=0.955100856;
                         break;
                    case 128:
                         f=0.95801586;
                         break;
                    case 129:
                         f=0.960835064;
                         break;
                    case 130:
                         f=0.963558185;
                         break;
                    case 131:
                         f=0.966184952;
                         break;
                    case 132:
                         f=0.9687151;
                         break;
                    case 133:
                         f=0.971148378;
                         break;
                    case 134:
                         f=0.973484542;
                         break;
                    case 135:
                         f=0.975723358;
                         break;
                    case 136:
                         f=0.977864602;
                         break;
                    case 137:
                         f=0.979908061;
                         break;
                    case 138:
                         f=0.98185353;
                         break;
                    case 139:
                         f=0.983700815;
                         break;
                    case 140:
                         f=0.98544973;
                         break;
                    case 141:
                         f=0.987100101;
                         break;
                    case 142:
                         f=0.988651763;
                         break;
                    case 143:
                         f=0.99010456;
                         break;
                    case 144:
                         f=0.991458348;
                         break;
                    case 145:
                         f=0.992712991;
                         break;
                    case 146:
                         f=0.993868363;
                         break;
                    case 147:
                         f=0.99492435;
                         break;
                    case 148:
                         f=0.995880845;
                         break;
                    case 149:
                         f=0.996737752;
                         break;
                    case 150:
                         f=0.997494987;
                         break;
                    case 151:
                         f=0.998152472;
                         break;
                    case 152:
                         f=0.998710144;
                         break;
                    case 153:
                         f=0.999167945;
                         break;
                    case 154:
                         f=0.999525831;
                         break;
                    case 155:
                         f=0.999783764;
                         break;
                    case 156:
                         f=0.99994172;
                         break;
                    case 157:
                         f=0.999999683;
                         break;
            }
            
            if(negativ==true)
            {
                    f=f*(-1);
            }
            if(groesserPI==true)
            {
                    f=f*(-1);
            }
            return f;
}

float cos(float x)
{
      x=x+PI/2;
      return sin(x);
}

float tan(float x)
{
      return sin(x)/cos(x);
}

double sqrt(double a)
{
      double x0=1;
      int i=0;
      if(a>=0)
      {
           while((x0*x0)!=(a) && i<100)
           {
                x0=x0+(a-x0*x0)/(2*x0);
                i++;
           }
      }
      else
      	x0=0;
      return x0;
}

double nrt(double a, int n)
{
      double x0=1;
      int i=0;
      {
           while((x0*x0)!=(a) && i<100)
           {
                x0=x0+(a-pow(x0,n))/(n*pow(x0,n-1));
                i++;
           }
      }
      return x0;
}
