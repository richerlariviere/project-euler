#include <iostream>
#include <sstream>
/*
 
	A palindromic number reads the same both ways. The largest palindrome made from the product of two 
	2-digit numbers is 9009 = 91 × 99.
 
	Find the largest palindrome made from the product of two 3-digit numbers.
*/

using namespace std;

string LongToAscii(unsigned long _iElem){
	// Création d'un flux de sortie
	ostringstream fluxSortie;
	// Écrire un nombre dans le flux
	fluxSortie << _iElem;
	// Récupérer la chaîne de caractères résultante
	return fluxSortie.str();
}

bool IsPalindrome(long lNumber){
	//It should work correctly
	string strNumber = LongToAscii(lNumber);
	unsigned long j = strNumber.length() - 1;
	for (int i = 0; i < strNumber.length() - 1 / 2; i++, j--) {
		if(strNumber.at(i) != strNumber.at(j))
			return false;
	}
	return true;
}

long FindLargestPalindrome(void){
	long lPalindrome = 0;
	long lBiggestPal = 0;
	for (int i = 999; i > 0; i--) {
		for (int j = 999; j > 0; j--) {
			lPalindrome = i * j;
			if(IsPalindrome(lPalindrome) && lPalindrome > lBiggestPal)
				lBiggestPal = lPalindrome;
		}
	}
	
	
	return lBiggestPal;
	
}



int main(int argc, const char * argv[]) {

	cout<<FindLargestPalindrome()<<endl;
    
	
	return 0;
}

