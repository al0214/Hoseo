number = [i for i in range(2, 101, 1)]
for i in number:
    for j in number:
        if (j % i == 0) & (i != j):
            number.remove(j)

print(number)
