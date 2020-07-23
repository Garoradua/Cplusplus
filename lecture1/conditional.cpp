#include <iostream>
using namespace std;
int main()
{
	int wind,friends;
	cout << "enter the wind is 1 or 0 or friends or not";
	cin >> wind;
	

	if(wind==0)
	{
		cin >> friends;
		if(friends>0)
		{
			cout<<"We can play";

		}
		else
		{
			cout<<"We can't play";
		}
	}
	else
	{
		cout<<"We can't play";
	}
	
	return 0;

}

