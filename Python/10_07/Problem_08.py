a = ['aba', 'xyz', 'abc', '121']
same = 0

for i in range(0, len(a)):
    start = a[i][0]
    end = a[i][-1]

    if start == end:
        same += 1
print(f'문자열의 개수 = {same}')
