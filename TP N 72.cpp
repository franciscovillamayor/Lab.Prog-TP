#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVector (vector<int> A,int n);
int SumarVectores(vector <int> vec);
void MostrarVector(vector<int> A);

int main()
{
	int N=10;
	vector<int> A;
    vector<int> B;
    vector<int> C;
    
   A=GenerarVector(A, N);
   B=GenerarVector(B, N);
   C=SumarVectores(A, B);
   
	return 0;
}

vector<int>GenerarVector(vector<int> A , int n)
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

int SumarVectores(vector <int> vec)
{
	int i;
	int Contador=0;
	for(i=0; i<vec.size(); i++)
	{
		Contador+=vec[i];
	}
	return Contador;
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

