def isPrime(n):
    for i in range(2,1+n):
        c=0
        for j in range(1,i+1):
            if i%j==0:
                c+=1
        if c==2:
            print(i)
isPrime(5)
