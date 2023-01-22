1. prefix sum and sliding window you should always consider first while solving subarray problems..
2. how can we find if the sum of the elements within the range, from i to j, is exactly divisible by k or not 
3. subtract the (prefixsum[i]-prefixsum[j])%k==0, then we can say they are divisible by k, but doing this will take O(N2)
4. so, to optimise it, convert the about equation, to prefixsum[i]%k==prefixsum[j]%k
5. we need remainder's count till now, at each point
6. so, if the remainder that we face with curr prefix sum, that has repeated then just cnt+=mp[prefix[sum]%k]
7. now, there are two major problems, one is negative numbers can occur, whose remainder is not counted as exprected, -1%k remainder needs to be 1 here
8. second is, when total sum of subarray becomes zero..
9. so, add k to every num, which is negative to get correct remainder, make mp[0]==1, so that it gives correct output when first time remainder zero occurs
