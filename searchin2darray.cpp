// searchin2darray
#include <iostream>
using namespace std;
void searchin2darray(int a[][4],int row,int col, int key){
	int startr = 0;
	int startc = col-1;
	while(startr<row && startc>=0){
		if(a[startr][startc]==key){
			cout << "element found at " << startr << " "<< startc << " " << endl;
			return;
		}
		else if(key>a[startr][startc]){
			startr++;
		}
		else{
			startc--;
		}

	}
cout << "Element not found";
}


int main()
{	
	int val=1;
	int a[4][4];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			a[i][j]= val;
			val++;
		}
	}
	int key;
	cout << "Enter key Element" << " ";
	cin >> key;
	searchin2darray(a,4,4,key);
	return 0;
}