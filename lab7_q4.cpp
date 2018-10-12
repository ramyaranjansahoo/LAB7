
//First include the library
#include<iostream>
using namespace std;
//Declaration and definition of the recursive function 
int printsum(int a,int b,int s)
{ 	
//loop terminator
if(b==(a+1)){cout<< "sum is "<<s;
return s;
}
//loop running
else
{   
//Calculation of sum by adding the incremented values one by one
s+=b;
//incrementation
		b++;
//rucursive call
 printsum(a,b,s);
 return 0;
}
	
}
//main function
int main(){
//input from user
int n;
cout<<" Finding sum of natural numbers from 1 to n"<<endl;
cout<<"Enter n "<<endl;
cin>>n;
//calling the recursive function
printsum(n,1,0);
return 0;
}
