def heap_permute(a, n):
    if n == 1:
        yield a
    else:
        for i in range(n-1):
            yield from heap_permute(a, n-1)
            if n % 2 == 0:
                a[i], a[n-1] = a[n-1], a[i]
            else:
                a[0], a[n-1] = a[n-1], a[0]
        yield from heap_permute(a, n-1)

# Example usage:
a = [1,2,3]
for p in heap_permute(a, len(a)):
    print(p)
    
# This method is by fixed every last elements, than give the every possible previous elements,
# then fix the second last elements(recursion start), then find the next possible combination.
