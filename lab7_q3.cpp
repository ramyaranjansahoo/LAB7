
// First include the libraries
#include<iostream>
using namespace std;
//Declaration and definition of recursive function 
int printeven(int a,int b=2)
{
//loop terminator
if(b>a)
{
}  
else
{   
//Printing even numbers one by one
cout<<b<<endl;
b+=2;
//recursive call statement
printeven(a,b);
return 0;
}
return 0;
}
//main function
int main()
{
//input from user
int x;	
cout<<" Range till even number is to be printed is "<<endl;
cin>>x;
//calling the recursive function
printeven(x);
return 0;	
}
