a = [["0" for i in range(10)] for i in range(10)]

look = True

row = 0
col = 0

while (look):

    print(f'{"-" * 35}')
    print(f'  1   2   3   4   5   6   7   8   9   10')
    print(f'{"-" * 35}')
    for i in range(10):
        for j in range(10):
            print(f'   {a[i][j]}', end="")
        print("\n")

    row = int(input("원하시는 좌석의 행 번호를 입력하세요(종료는 -1): "))
    if (row == -1):
        look = False
        break
    col = int(input('원하시는 좌석의 열 번호를 입력하세요(종료는 -1): '))
    if (col == -1):
        look = False
        break

    if (a[row - 1][col - 1] == "0"):
        a[row-1][col-1] = 1
        print("예약되었습니다.")
    else:
        print("이미 예약된 좌석입니다.")
