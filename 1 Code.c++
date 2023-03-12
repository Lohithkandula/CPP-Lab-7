#include<iostream>
using namespace std;
class leapyear
{
public:
void isleapyear(int yr)
{
if(((yr%4==0)&&(yr%100!=0)||(yr%400==0)))
cout<<"Given year is a leap year"<<endl;
else
cout<<"Guven year is not a leap year"<<endl;
}
};
int main()
{
int year;
leapyear x;
cout<<"Enter any year: "<<endl;
cin>>year;
x.isleapyear(year);
return 0;
}
