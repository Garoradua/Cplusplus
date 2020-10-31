#include<iostream>
using namespace std;
void readline(char a[],int  maxlen)
{
	char ch = cin.get();
	int i=0;

	while(ch != '\n')
	{
		a[i]= ch;
		i++;

		if(i==maxlen-1)
		{
			break;
		}

	}
	a[i]='\0';

	return;

	
}
int main()
{
	char a[1000];
	readline(a,1000);
	cout << a << endl;
	return 0;

}
