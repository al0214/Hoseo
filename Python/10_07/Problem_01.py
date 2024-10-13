a = [1, 2, 3, 4]
b = a[0]
for i in range(1, len(a)):
    b *= a[i]
print(b)
