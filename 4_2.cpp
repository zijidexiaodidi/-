#include <iostream.h>
int main() 
{
    int year,sum = 0;
    for(year = 2000; year <= 3000; ++year) {
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            if(sum && sum % 10 == 0) cout << endl;
            cout << year << "  ";
            ++sum;
        }
    }
    if(sum % 10) cout << endl;
	cout<<"ÈòÄêÊı"<<sum<<endl;  
}