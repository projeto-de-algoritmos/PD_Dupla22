def fibonacci(num : int) -> int:
    if num <= 1:
        return num
    return fibonacci(num - 1) + fibonacci(num - 2)


limit = 10
for a in range(limit):
    print(fibonacci(a), end=' ')
print()