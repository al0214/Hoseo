a = input("정수를 입력하시요 : ")

for i in range(0, int(a)+1):
    for j in range(0, i):
        print(j+1, end=" ")
    print("")
