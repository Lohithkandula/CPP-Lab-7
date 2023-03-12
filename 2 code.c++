#include<iostream>
using namespace std;
class factorial
{
private:
int num;
public:
int recursive(int num);
int non_recursive(int n);
factorial()
{
num=0;
}
~factorial()
{
cout<<"\nDestructor is called";
}
};
int factorial::recursive(int num)
{
if(num>1)
{
return num*recursive(num-1);
}
else
return 1;
}
int factorial::non_recursive(int n)
{
int i,fact=1;
for(i=1;i<-n;i++)
{
fact=fact*i;
}
return fact;
}
int main()
{
int value;
factorial f;
cout<<"Enter the number: ";
cin>>value;
cout<<"Factorial is "<<f.recursive(value);
cout<<"\nFactorial is "<<f.non_recursive(value);
}
