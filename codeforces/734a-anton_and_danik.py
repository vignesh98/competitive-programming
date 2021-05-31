a = int(input())
b = input()

#b = "ADAAAA"

acount = b.count('A')
dcount = b.count('D')

if acount>dcount:
    print("Anton")
elif dcount>acount:
    print("Danik")
else:
    print("Friendship")