#include<iostream.h>
void main()
{
	int a,b;
	cout<<"������a:"<<endl;
	cin>>a;
if(a<10)
b=1;
else
if(a<=99)
b=2;
else
if(a<=999)
b=3; 
else
b=4;
	switch(b)
	{
	case 1:cout<<"С��10\n";break;
	case 2:cout<<"10~99\n";break;
	case 3:cout<<"100~999\n";break;
	case 4:cout<<"1000����\n";break;
	}
}