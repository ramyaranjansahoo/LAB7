// First include the library
#include<iostream>
using namespace std;
//Declaration and definition of recursive function.
int power(int a,int b,int x=1,int y=1)
{
//termination of condition given by if statement.
if(x>b)
{	
cout<< a <<" to the power "<< b <<" = "<<y;}
//loop running
else
{
y*=a;
x++;
power(a,b,x,y);
}
return 0;
}
//main function
int main(){
//Input values.
int a,b;	
cout<<"Program to find a to the power b "<<endl;
cout<<"Enter a,b "<<endl;
cin>>a>>b;
//Calling the recursive function
power(a,b);
return 0;	
}
