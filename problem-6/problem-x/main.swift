//
//  main.swift
//  problem-x
//
//  Created by Richer Lariviere on 2015-01-21.
//  Copyright (c) 2015 Richer Lariviere. All rights reserved.
//

import Foundation

let max = 100
var square_sum = 0,
sum = 0
for (var i = 1; i <= max; i++){
    square_sum += i*i
    sum += i
}

println(sum*sum - square_sum)

