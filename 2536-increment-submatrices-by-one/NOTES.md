every query in question represent a subarray.

which will be used to increment element values in a matrix

the brute force way is to iterate in each and every query, and increment the value of each cell, gives tle 

little optimisation with prefix sum can be used over here.......

mark the beginning of each range with +1 and ending of each range with -1, in every row it affects 

after that we can just traverse in the 2d array, summing up the values encountered in between, to find the ranges that are affecting the cell 
