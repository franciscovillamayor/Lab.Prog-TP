#include <iostream>
#include <string>

using namespace std;
bool EsMultiplode17 (int a);

int main ()
{

int a;
string  cartel= "NO ES MULTIPLO";

cout<<"ingrese un numero";
cin>>a;
if( EsMultiplode17(a))

{
cartel="ES MULTIPLO";
}

cout<<cartel<<endl;
return 0;

}



bool  EsMultiplode17 (int a)
{
    bool Mul=false;
  if(a%17==0)
  {Mul=true;
  }
  return Mul;
   
}