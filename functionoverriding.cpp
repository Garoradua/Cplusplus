#include<bits/stdc++.h>
using namespace std;
class vehicle{
public:
	void veh(){
		cout << "All cars";
	}
};

class cars{
public:
	void veh(){
		cout << "Safari";
	}
};
int main(){
	cars obj;
	obj.veh();
	return 0;
}