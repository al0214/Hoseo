a = [10, 20, 30, 20, 10, 50, 60]
b = []
for i in a:
    if i not in b:
        b.append(i)
print(b)
