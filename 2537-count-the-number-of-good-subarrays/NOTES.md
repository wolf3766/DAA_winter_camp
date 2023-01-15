1. first observe all the facts, that is how you are building a subarray, of pairs with equal values. 
2. while adding each new element, the number of pairs increased will be the number of elements already present in the array 
3. while deleting an element from a subarray, the number of element deleted will be equal to number of elements present in it. 
4. so, if we look carefully at these facts, then its a sliding window question. 
5. most of the subarray question are solved using sliding window technique, remember this and implement it. 


6. take two pointer, i and j, move ith pointer keep jth pointer same, increase in linearly, when the number of pair formed surpasses the number number of required pair
7. in case of surpass, just reduce the number of pairs we have to required level. 
