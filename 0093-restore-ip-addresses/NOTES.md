1. constraints are really low, so brute force will work fine here
2. place three points at every possible position
3. since, address between two dot can be of length 3 only
4. so, run a loop from 1 to 3, mark dots at every possible position
5. substr extracted inbetween is converted to, number cause while string compare, "255" is smaller than "35"
6. later on the number is converted back to string, such that it can be concatinated and pushed in vector of strings 
