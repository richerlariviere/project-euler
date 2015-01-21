/*
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 *
 * What is the 10 001st prime number?
 */
import Foundation
import Cocoa

func IsPrime(number : Double) -> Bool {
    if (number < 2){
        return false;
    }
    else{
        for var i:Double = 2; i <= sqrt(number); i++ {
            if (number % i == 0){
                return false;
            }
        }
    }
    return true;
}

var primeCount = 0,
    currentNumber:Double = 0,
    primeNumber:Double = 0

do {
    if IsPrime(++currentNumber){
        primeCount++
    }
} while primeCount < 10001;

println(currentNumber)
