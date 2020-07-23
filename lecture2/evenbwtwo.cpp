#include <iostream>
using namespace std;
int main() {
	cout << "Enter total no of test cases" << endl;
	int n;
	cin >> n ;
	int x=1;
	for(x=1;x<=n;x++)
	{
		cout << "Enter two numbers" << endl;
		int a=0;
		int b=0;
        int count=0;
		cin >> a >> b ;
		int i=0;
		for(i=a;i<b;i++)
		{
			if(i%2==0)
			{
				count++;
			}

		}
		cout << count;
	}
	return 0;
}