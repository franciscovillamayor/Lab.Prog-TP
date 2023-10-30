#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVector(vector<int> A, int N);
vector <int> SumarElementosVector(vector <int> A, vector<int> B);
void MostrarVector(vector<int> A);

int main()
{
	vector<int> A;
	vector<int> B;
	vector<int> C;
    int N=10;
	cout<<"Ingrese cantidad de elementos del vector: "<<endl;
	cin>>N;
	A=GenerarVector(A, N);
	B=GenerarVector(B,N);
	C=SumarElementosVector(A, B);
	
	
	MostrarVector(A);
	MostrarVector(B);
	MostrarVector(C);
	
	//cout<<"La suma de los vectores es: "<<Contador<<endl;
	return 0;
}

vector<int>GenerarVector(vector<int> A, int N)
{
	int i;        
	srand (time (NULL));
	int e;
	for(i=0; i<N; i++)
	{
		e=rand()%1500;
		
	A.push_back (e);
	}
	return A;
}

vector <int> SumarElementosVector(vector <int> A, vector<int> B)
{
	int i;
	int e=0;
	vector<int>C;
	for(i=0; i<A.size(); i++)
	{
		
		
			e= A[i]+B [i];
			C.push_back(e);
			
		
	}
	return C;
}

void MostrarVector(vector <int> A)
{
	int i;
	
	for( i=0; i<A.size(); i++ )
	{
	
	cout<<A[i]<<"/";
	}
		cout<<endl;
}

