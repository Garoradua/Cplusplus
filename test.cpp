#include<iostream>
int main()
{
	int a[]= {5,10,15};
	int i=0;
	int num;
	num=a[++i]+++i+(++i);
	printf("%d",num);
	return 0;
}
