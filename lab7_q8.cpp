//First include the library
#include<iostream>
using namespace std;
//Declaration and definition of the recursive function 
int sumdig(int b,int s)
{
//loop terminator
if(b==0)
{
cout<<" sum of digits = "<<s;
return 0;
}
else
{	
//summing digits from the last 
s+=(b%10);
b=(b/10);
//recursive call
sumdig(b,s);
return 0;
}
}
//main function
int main()
{
//input from user
int x;	
cout<<"Enter any number "<<endl;
cin>>x;
//calling the recursive function
sumdig(x,0);
return 0;	
}
