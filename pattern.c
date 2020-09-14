#include<stdio.h>
void printPat(int n)
{
	printf("hi");
    for(int j=n; j>=1; j--){
        for(int k=n; k>=1; k--){
            for(int i=1; i<=j; i++){
            printf("%d ", k);
            }
        }
        printf("$");
   
}
printf("hello");

}
int main(){

	printf("Enter any number\n");
	int n;
	scanf("%d ", &n);

	printPat(n);

return 0;
}