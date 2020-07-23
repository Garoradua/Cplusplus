#include<iostream>
using namespace std;

void passstring(string s)
{
	int rightcount=0;
	int leftcount=0;
	int totalcount=0;
	for(int i=0; i<=s.length(); i++)

	{
		char ch= s[i];
		if(ch=='L')
		{
			leftcount++;
		}
		else{
			rightcount++;
		}

		if(leftcount==rightcount)
		{
			totalcount++;
			rightcount=0;
			leftcount=0;
	}
	
}
cout << totalcount;
}


int main()
{
	string s= "LRLRLLLRRR";
	passstring(s);
	return 0;
}
