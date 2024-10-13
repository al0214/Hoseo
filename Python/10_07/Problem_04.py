a = [5, 10, 15, 10, 25]
j = len(a)
for i in range(len(a)-1, 0, -1):
    if a[i] == 10:
        a.pop(i)
print(a)
