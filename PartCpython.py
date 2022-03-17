def largest_sum(Vector):
    b = 0
    e = 1
    for i in range(len(Vector)):
        for j in range(i + 1, len(Vector) + 1):
            if sum(Vector[i:j]) > sum(Vector[b:e]):
                b, e = i, j
    return Vector[b: e]




Vect = []
n = int(input("Enter number of elements : "))
for i in range(0, n):
    elem = int(input())
    Vect.append(elem)

print(largest_sum(Vect))