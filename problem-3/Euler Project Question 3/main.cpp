/*
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 *
 */

#include <iostream>

using namespace std;

long FindLargestPrimeFactor( unsigned long _iNumber){
	long iLargest = 0;
	long iUpdatedNumber = _iNumber;
	
	int i = 2;
	while(i * i <= iUpdatedNumber){ //On fait i * i pour car on sait que les facteurs premiers ne montent pas plus haut que sqrt(n)
		if (iUpdatedNumber % i == 0) {
			iUpdatedNumber /= i;
			iLargest = i;
		}
	
		i = (i == 2) ? i + 1 : i + 2; //Ici on passe au travers des nombres pairs parce qu'ils ne pourront jamais être considérés comme un facteur premier.
		
	}
	if (iUpdatedNumber > iLargest)
		iLargest = iUpdatedNumber;
	
	return iLargest;
	
}

int main(int argc, const char * argv[]){

	cout << FindLargestPrimeFactor(600851475143)<< endl;
	
    return 0;
}

