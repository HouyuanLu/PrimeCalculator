import math

def isprime(x):
    for i in range(int(math.sqrt(x))):
        if x % (i+2) == 0:
            return False
    return True

a = 2
cnt = 0
while(True):
    if(isprime(a)):
        cnt = cnt + 1
        print(f"{cnt} {a}")
    a = a + 1
