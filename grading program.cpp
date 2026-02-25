#include <iostream>
using namespace std;
int main ()
{
	float sesstional,mid,final,total, percentage;
	cout <<"enter your sesstional marks(out of 25):";
	cin >>sesstional;
	cout<<"enter your mid exam marks (out of 25):";
	cin >>mid;
	cout <<"enter your final term marks(out of 50):";
	cin >>final;
	total = sesstional+mid+final;
	percentage=total;
	cout<<"total marks="<<total<<endl;
	cout<<"percentage="<<percentage<<"%"<<endl;
	
	if (percentage>=90)
	{cout<<"grade: A"<<endl;}
	else if (percentage>=80)
	{cout<<"grade:B"<<endl;}
	else if (percentage>=70)
	{cout<<"grade:C"<<endl;}
	else if (percentage>=60)
	{cout<<"grade:D"<<endl;}
	else 
	{cout<<"grade:F"<<endl;}
	
	return 0;
}
