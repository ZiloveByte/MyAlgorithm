def fib(k: int) -> int:
    a, b = 0, 1
    for _ in range(k):
        a, b = b, a + b
    return a

m, n = map(int, input().split())
print(fib(n - m + 1))