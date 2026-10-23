#range()
#生成偶数
'''
even_numbers = list(range(2, 11, 2))
print(even_numbers)
'''
#生成平方
squares = []
for value in range(1, 11):
    square = value ** 2
    squares.append(square)
print(squares)
#min(),max(),sum()
#生成平方的列表推导式
squares=[value**2 for value in range(1,11)]
print(squares)
#切片
players = ['charles', 'martina', 'michael', 'florence', 'eli']
print(players[0:3])#0-2
print(players[2:])#2-最后
print(players[:4])#0-3
print(players[-3:])#最后3个
#遍历切片
for player in players[0:3]:
    print(player.title())
#复制列表
my_foods = ['pizza', 'falafel', 'carrot cake']
friend_foods = my_foods[:]
print(friend_foods)
#元组
dimensions = (200, 50)
print(dimensions)