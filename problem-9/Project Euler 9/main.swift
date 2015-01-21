/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

import Foundation
import Cocoa

func projectEulerQuestion9() {
    for var a:Double = 0; a < 500; a++ {
        for var b:Double = 0; b < 500; b++ {
            if Double(a*a + b*b) ==  pow(Double(1000 - a - b), Double(2)) {
                println("a = \(Int(a)), b = \(Int(b)), c = \(Int(sqrt(Double(a*a + b*b))))")
                println("answer : \(Int(a*b*sqrt(Double(a*a + b*b))))")
                return;
            }
        }
    }
}

projectEulerQuestion9();
