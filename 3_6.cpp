#include<iostream.h>
void main()
{
	int r,k,s,c;
	cout<<"请输入:"<<endl;
	cin>>r>>k;
	s=3.14*r*r;
	c=3.14*2*r;
	switch(k)
	{
case 1:cout<<"面积="<<s<<endl;
case 2:cout<<"周长="<<c<<endl;
case 3:cout<<"面积="<<s<<","<<"周长="<<c<<endl;
	}
}
