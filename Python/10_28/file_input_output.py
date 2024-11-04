total = 0

with open("./sell.txt", "r") as file:
    lines = [int(i.split("\n")[0]) for i in file]
    
    

with open("./manage.txt", "w") as file:
    file.write(f'총매출 = {sum(lines)}\n평균일매출 = {sum(lines) / float(len(lines))}')