#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n ;

	for(int i=1;i<=n;i++)
	{
		int count=0;
		int a=0; // int a,b=0;
		int b=0;
		cin >> a >> b;
		int x=0;
		for(x=a;x<=b;x++)
		{
			if(x==0 || x==1)
				continue;
			else if(x==2)
				{count++;
					continue;}
			else
			{
			for(int j=2;j<=x;j++)
				{
					if (x%j==0)
					{
						if(x!=j)
						{
							break;
						}
						if(x==j)
						{
							count++;
						}
					}
				}
			}	
		}
	cout << count << endl;
	}
return 0;
}