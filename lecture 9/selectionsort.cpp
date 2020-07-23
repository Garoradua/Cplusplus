#include <iostream>
using namespace std;
int main()
{
	int a[]= {2,-2,4,6,1,0};
	int n=6;
	int min_value;
	int replace_index;
	int index= 0;
	while(index < n-1)
	{
		min_value = a[index];
		replace_index = index;


		for(int i= index+1; i<n; i++)
		{
			if(min_value > a[i])
			{
				min_value= a[i];
				replace_index= i;
			}
		}

		swap(a[replace_index], a[index]);
		index++;
	}


for(int i=0; i<n; i++)
{
	cout << a[i] << " " ;
}



	return 0;

}