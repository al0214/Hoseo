a = [i for i in range(1, 6)]
b = [1, 3, 3, 4, 5, 6, 7]
c = []
for i in a:
    for j in b:
        if i == j:
            if j not in c:
                c.append(j)
print(c)
