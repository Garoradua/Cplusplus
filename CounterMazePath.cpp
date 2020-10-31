#include<iostream>
using namespace std;

int counter(int sr, int sc, int er, int ec){
	//Base Case
	if(sr==er && sc==ec){
		return 1;
	}
	if(sr>er || sc>ec){
		return 0;
	}

	//Recursive Case
	int RightMove= counter(sr, sc+1, er, ec);
	int DownMove= counter(sr+1, sc, er, ec);
	int total= RightMove + DownMove;
	return total;
}

int main(){
	cout << counter(0,0,2,2);
	return 0;
}