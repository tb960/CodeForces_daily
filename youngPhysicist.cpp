#include <iostream>
using namespace std;

int main(){
	int n, x, y, z;
	int xsum=0, ysum=0, zsum=0;
	cin >> n;
	
	while(n>0){
		cin >> x >> y >> z;
		xsum += x;
		ysum += y;
		zsum += z;
		
		n -= 1;
	}
	if (xsum == 0 && ysum == 0 && zsum == 0){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;
}
		
