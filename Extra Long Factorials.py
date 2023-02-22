# Link :- https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=true

# code :- 

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'extraLongFactorials' function below.
#
# The function accepts INTEGER n as parameter.
#


def extraLongFactorials(n):
    # Write your code here
    if n==1 or n==0: 
        print(1)
        return
    ans=1
    while n>1:
        ans=ans*n
        n-=1
        
    print(ans)

if __name__ == '__main__':
    n = int(input().strip())

    extraLongFactorials(n)
