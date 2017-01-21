#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    int x = 0;
    char binaryString[10];
    strcpy(binaryString,"1010010010");
    
    for(int i=0 ; i<10 ; i++){
    	if(binaryString[i] == '1')
		x++;
	}
    
    cout << "There are " << x << " one characters";
	
	return 0;
}
