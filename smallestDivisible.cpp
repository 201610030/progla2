#include <iostream>

using namespace std;

int main (){
	
	int ctr =  1;
	
	while(1){
		
		if(ctr%2 == 0 && ctr%3 == 0 && ctr%5 == 0 && ctr%8 == 0 && ctr%12 == 0 && ctr%13 == 0 && ctr%15 == 0){
			cout << ctr;
			break;
		}
		
		ctr++;
	};
	
	return 0;
}
