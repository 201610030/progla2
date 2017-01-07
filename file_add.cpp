#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    int i;
    int numberArray[5];
    int sum = 0;

    for (i = 0; i < 5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for (i = 0; i < 5; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }
    
    for (i = 0; i < 5 ; i++){
    	sum += numberArray[i]; 
	}
	
	cout << "The sum of all numbers is: " << sum;

}
