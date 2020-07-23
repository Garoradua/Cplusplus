#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n ;
	int x=1;
	for(x=1;x<=n;x++)
	{
		int a=0;
		int b=0;
        int count=0;
		cin >> a >> b ;
		int i=0;
		int j=1;
		for(i=a+1;i<b;i++)
		{
			while(j<i)
			{
			if(i%j==0)
			{
				count++;

			}
			j++;
			}

		}
		cout << count <<endl;
	}
	return 0;
}