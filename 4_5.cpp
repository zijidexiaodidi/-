#include<iostream.h>
void main()
{
	int m;
    cout<<"1~99֮���ͬ����:"<<endl;
	for(int i=1; i<100; i++)
    {
        m=i*i;
        if(i<10&&i==m%10 ) 
            cout<<i<<"ͬ����Ϊ:"<<m<< endl;
        else if(i>=10&&i==m%100 ) 
            cout<<i<<"ͬ����"<<m<<endl;
    }
}