
//First include the library
#include<iostream>
using namespace std;
//Declaration and definition of the recursive function 
int rev(int a)
{
//loop terminator
if(a==0)
{
}
//loop running
else
{   
//Each time the ending term is printed which is found by % operator
cout<<a%10;
//number before the ending term taken before
a=(a/10);
//recursive call
rev(a);
return 0;
}
return 0;
}
//main function
int main()
{
//input from user
int b;	
cout<<" Enter a number to find its palindrome "<<endl;
cin>>b;
//calling the recursive function
rev(b);
return 0;
}	
