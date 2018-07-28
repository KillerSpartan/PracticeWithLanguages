import time
start = time.time()

def fib(n):
    if n < 2:
        return n
    return fib(n-2) + fib(n-1)
#print(fib(4))

#print(list(map(fib, [1, 2, 3, 4, 5, 6, 7, 8, 9, 10])))

print(list(map(fib, range(1, 32))))

end = time.time()
print("Execution time: ")
print(end - start)

