/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int i;
float K,N;
int main ()
{ 
  cout<< "\nLeitura do vetor de X?";
  cin >> N;
  cin>>K;
  if(N and K)
  {
      for (i=0; i<=N; i++)
    {
    cout <<"["<<i+1<<"]"<<"="<< K*N;
    }
  }
  system("pause");

    return 0;
}