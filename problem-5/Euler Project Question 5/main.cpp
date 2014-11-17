/*
 *	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any
 *	remainder.
 *
 *	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]){
		
	//Manière sans programmation
	
	//	Trouver tous les facteurs premiers des nombres de 11 à 20. Les nombres inférieurs sont inclus
	//	natuellement :-)
	
	//	20 = 2^2 * 5
	//	19 = 19
	//	18 = 2 * 3^2
	//	17 = 17
	//	16 = 2^4
	//	15 = 3 * 5
	//	14 = 2 * 7
	//	13 = 13
	//	11 = 11
	
	//	Réponse : 2^4 * 3^2 * 5 * 7 * 11 * 13 * 17 * 19 = 232 792 560

	//Méthode programmation BRUTE FORCE
	
	int i = 1;
	
	while (true){
		if ((i%11)==0 &&
			(i%12)==0 &&
			(i%13)==0 &&
			(i%14)==0 &&
			(i%15)==0 &&
			(i%16)==0 &&
			(i%17)==0 &&
			(i%18)==0 &&
			(i%19)==0 &&
			(i%20)==0)
			break;
		i++;
	}
	
	cout<<"Answer is : "<< i << endl;
	

	return 0;
}