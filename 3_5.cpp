#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	cout<<"������:"<<endl;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"���="<<s<<endl;
}



