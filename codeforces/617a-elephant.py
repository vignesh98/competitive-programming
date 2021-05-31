#val = int(input())
val = 10
l = [5,4,3,2,1]
count =0


for x in l:
    print(x)
    if val > x:
        if (val % x) == 0:
            count += 1
print(count)
