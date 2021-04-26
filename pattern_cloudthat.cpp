for(int i=1; i<=5; i++){
	for(int j=1; j<=i; j++){
		cout << "1";
	}
	cout <<"\n";
}








select name,id,max(salary) from employee where salary < select max(salary) from employee;