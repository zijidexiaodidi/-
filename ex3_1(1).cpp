#include<iostream.h>
void main()
{
	int i;
	cout<<"������i"<<endl;
	cin>>i;
	if(i<10)
		cout<<"С��10"<<endl;
	else
	{
		if(i<=99)
			cout<<"10~99"<<endl;
		else
		{
			if(i<=999)
				cout<<"100~999"<<endl;
			else
				cout<<"1000����";
		}
	}
}

