#include<iostream.h>
void main()
{
	int n,i;
	cout<<"������n:"<<endl;
    cin>>n;
	i=0;
	for(;n!=1;)
	{	
		if(n%2==0)
		{
		   n=n/2;
	       i++;
		}
	    else
	    {
			n=3*n+1;
            i++;
		}
	}
	cout<<"�����ĽǹȲ��벽����ֵΪ��"<<i-1<<endl;
}
