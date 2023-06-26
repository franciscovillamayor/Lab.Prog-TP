#include <iostream>
using namespace std;
int CalcularMaximo (int a, int b, int c);

int main ()
{ int a,b,c;
cout<<"ingrese el primer numero";
cin>>a;
cout<<"ingrese el segundo numero";
cin>>b;
cout<<"ingrese el tercer numero";
cin>>c;
int Max;
Max=CalcularMaximo (a, b, c);
cout<<Max<<endl;

 return 0;
}


int CalcularMaximo (int a, int b, int c)
{
 
  int max;
  if (a>b,c)
{
max=a;
}
 
  if (b>a,c)
   {
    max=b;
}

if (c>a,b)
   {
    max=c;
   
 }  
   
   
 return max;
}
