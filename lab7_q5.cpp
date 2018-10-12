//First include the library
#include<iostream>
using namespace std;
//Declaration and definition of the recursive function. 
int  printsumodd(int a,int b,int s)
{ 	
//loop terminator
if(b>a)
{
cout<< " sum is "<<s<<endl;
return 0;
}
//loop running
else
{    
//Calculation of sum by adding incremented elements one by one.
s+=b;
//incrementation
b+=2;
//rucursive call
printsumodd(a,b,s);
return 0;
}
	
}
//main function
int main()
{
//input from user
int n;
cout<<"\n Finding sum of odd natural numbers from 1 to n";
cout<<"\n Enter n ";
cin>>n;
//Calling the recursive function
printsumodd(n,1,0);
return 0;
}

