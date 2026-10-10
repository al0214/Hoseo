a = int(input("첫 번째 정수를 입력하세요 : "))
b = int(input("두 번째 정수를 입력하세요 : "))

for k in range(1, a+b):
    if (a % k == 0 and b % k == 0):
        i = k

print(f'{a}와 {b}의 최대 공약수는 {i}')
