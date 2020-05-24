a = int(input())
b = dict()
for i in range(0,a):
    temp = input().split(" ")
    b[temp[0]] = temp[1]

while True:
    try:
        x = input()
        if(x in b):
            print("{}={}".format(x,b[x]))
        else:
            print("Not found")
    except EOFError:
        break