import math

def f(x):
    return math.factorial(x)
def A(x,y):
    return f(x)//f(x-y)

n,m=map(int,input().split());
sum=0

val1=A(n,n)
sum=sum+(val1*A(n+1,2)*A(n+3,m))+(2*val1*(n+1)*m*A(n+2,m-1))
print(sum)
