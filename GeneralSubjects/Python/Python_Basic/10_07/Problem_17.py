import random
randomNumber = [random.randint(0, 1) for _ in range(10)]


frontNumber = randomNumber[0]

count = 0
max_count = 0

for i in range(1, len(randomNumber)):
    if (frontNumber == randomNumber[i]):
        count += 1
    else:
        frontNumber = randomNumber[i]
        if (max_count <= count):
            max_count = count
        else:
            continue
        count = 1

print(randomNumber)
print(f'최대 연속 길이 = {max_count}')
