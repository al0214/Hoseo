save_number = dict()

def show_menu() -> int:
    print("1. 일정 추가 \n2. 일정 삭제\n3. 일정 검색 \n4. 일정 출력 \n5. 종료")
    self = int(input("메뉴 항목을 선택하세요 : "))
    return self

def add_info():
    global save_number
    
    day_number = input("추가할 일정 날자 ex(10/21): ")
    todo = input("일정 : ")
    
    if day_number in save_number:
        save_number[day_number].append(todo)
    else:
        save_number[day_number] = [todo]
    
def del_info():
    global save_number
    delName = input("지울 일정을 입력하여주세요 ex(10/21) : ")
    
    if delName in save_number:
        if len(save_number[delName]) > 1:
            for i in range(0, len(save_number[delName])):
                print(f'{i+1}번째 일정 {save_number[delName][i]}')
            popNumber = int(input("삭제할 넘버를 입력하여 주세요 : "))
            del save_number[delName][popNumber-1]
    else:
        print("존재하지 않는 일정 입니다.")
    
def search_info():
    global save_number
    
    searchName = input("찾을 일정을 입력하여 주세요 : ")
    
    if searchName in save_number:
        print(f'일정 날자 : {searchName}')
        for i in save_number[searchName]:
            print(i, end=', ')
        print("\n")
    
    else:
        print("존재하지 않는 일정 입니다.")
    
def print_info():
    global save_number
    
    
    for i, j in save_number.items():
        print(f'일정 날자 : {i}, 일정 : {j}')


def main():
    
    selecType = 0
    while(selecType != 5):
        selecType = show_menu()
        menu = [add_info, del_info, search_info, print_info]
        menu[selecType-1]()
            
if __name__ == "__main__":
    main()
    