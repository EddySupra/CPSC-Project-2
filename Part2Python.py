def largest_sum(Vector):
    b = 0
    e = 1
    for i in range(len(Vector)):
        for j in range(i + 1, len(Vector) + 1):
            if sum(Vector[i:j]) > sum(Vector[b:e]):
                b, e = i, j
    return Vector[b: e]


Vect1 = [10, 2, -5, 1, 9, 0, -4, 2, -2]
Vect2 = [-7, 1, 8,  2, -3, 1]
Vect3 = [9, 7, 2, 16, -22, 11]
Vect4 = [6, 1, 9, -33, 7, 2, 9, 1, -3, 8, -2, 9, 12, -4]

print("Largest Sum SubArray For Vect " + str(Vect1))
print(largest_sum(Vect1))
print("Largest Sum SubArray For Vect " + str(Vect2))
print(largest_sum(Vect2))
print("Largest Sum SubArray For Vect " + str(Vect3))
print(largest_sum(Vect3))
print("Largest Sum SubArray For Vect " + str(Vect4))
print(largest_sum(Vect4))

print()
Vect = []
n = int(input("Enter number of elements : "))
print("Enter element one by one")
for i in range(0, n):
    elem = int(input())
    Vect.append(elem)

print(largest_sum(Vect))


