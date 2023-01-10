the total number of unique characters that can exist in a string, will always be less than equal to 26
instead of iterating over only given characters in a string, iterate over the whole 26 characters, check the occurance of each character, if exist loop
simulate swapping between character, by increasing and decreasing frequency stored in hash map
check for the size of map, if equal return true
reverse all the swapping done in step 3, cause we require single swapping to make char equal
return false in the end
