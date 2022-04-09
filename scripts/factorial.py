def factorial(n : int) -> int:
    if n == 0:
        return 1
    return n * factorial(n-1)

limit = 7
for a in range(limit):
    print(factorial(a), end=' ')
print()