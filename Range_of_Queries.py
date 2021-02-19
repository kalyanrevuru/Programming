def SieveofEratosthenes(n):
    prime=[True]*(n+1)
    p=2
    while(p*p <= n):
        if(prime[p]==True):
            for i in range(p*p,n+1,p):
                prime[i]=False
        p+=1
    prime[0]=False
    prime[1]=False
    allPrimes=[x for x in range(2,n+1) if prime[x]]
    return allPrimes

def distPrime(arr,allPrimes):
    list1=list()
    for i in allPrimes:
        for j in arr:
            if(j%i==0):
                list1.append(i)
                break
    for i in list1:
        for j in arr:
            if j%i!=0 :
                list1.remove(i)
    return list1

for _ in range(int(input())):
    N=int(input())
    arr=list(map(int,input().split()))
    for i in range(int(input())):
        L,R=map(int,input().split())
        allPrimes=SieveofEratosthenes(R)
        value=distPrime(arr[L-1:R],allPrimes)  
        print(len(value))  
    