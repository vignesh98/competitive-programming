rooms = int(input())
count = 0
for x in range(rooms):
    a,b = input().split()
    a = int(a)
    b = int(b)
    c = b - a
    if c >=2:
        count += 1

print(count)