list1 = [i for i in range(1, 7)]
list2 = [i for i in range(6, 11)]

for i in list1:
    for j in list2:
        if i == j:
            print(True)
            break
