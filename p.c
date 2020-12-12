#include<stdio.h>
int main(){
	pid_t retval;
	int n;
	char *message;
	int exit_code;
	retval=fork();
	switch(retval){
		case -1:
		printf("Fork failed \n");
		break;

		case 0:
		// printf("Fork failed \n");
		n=30;
		exit_code=32;
		break;

		default:
		n=15;
		exit_code=0;
		break;
	}

	if(retval!=0){
		int stat_val;
		pid_t PID;
		PID = wait(&stat_val);
		printf("PID = %d\n",PID );
	}
	exit(exit_code);
}