''' Write a program to sum first N terms of the following Series
1 + X/2! – X2/4! + X3/6! - X4/8! + ……………………… '''

import time

a = int(input("Enter the number of terms"))
start = time.time()
x = 100
fact = 1
sign = 1
sum = 0
b = 1
c = 0
for i in range(a):
     fact = fact*(c+1)*(c+2)*sign
     sum = sum + x**b/fact
     print(sum)
     b +=1
     c +=2
     sign = -1

print(sum+1)
print(time.time()-start)
    