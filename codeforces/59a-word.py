a = input()
lcount = 0
ucount = 0
for letter in a:
    if letter.islower():
        lcount += 1
    else:
        ucount += 1
if ucount > lcount:
    a = a.upper()
    print(a)
elif lcount>ucount or lcount == ucount:
    a = a.lower()
    print(a)
    
