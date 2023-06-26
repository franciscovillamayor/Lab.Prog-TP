#include <iostream>
using namespace std;
int CalcularMaximo (int a, int b);

int main ()
{ int a,b;
cout<<"ingrese el primer numero para el intervalo";
cin>>a;
cout<<"ingrese el segundo numero para el intervalo";
cin>>b;
int Max;
Max=CalcularMaximo (a, b);
cout<<Max<<endl;

 return 0;
}


int CalcularMaximo (int a, int b)
{
 
  int max;
  if (a>b)
{
max=a;
}
  else
  {
  max=b;
}
 
 
 return max;
}

 
