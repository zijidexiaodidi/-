#include<iostream.h>
void main()
{
	int r,k,s,c;
	cout<<"������:"<<endl;
	cin>>r>>k;
	s=3.14*r*r;
	c=3.14*2*r;
	switch(k)
	{
case 1:cout<<"���="<<s<<endl;
case 2:cout<<"�ܳ�="<<c<<endl;
case 3:cout<<"���="<<s<<","<<"�ܳ�="<<c<<endl;
	}
}
