a = input()
l=["H","Q","9"]
ctr = 0
for x in a:
    if x in l:
        ctr = 1
if ctr == 1:
    print("YES")
else:
    print("NO")