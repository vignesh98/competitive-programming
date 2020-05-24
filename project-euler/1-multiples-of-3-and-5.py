def input_fn():
    n = int(input()) #input size
    for x in range(0,n):
        a = int(input())
        eval_fn(a)
def eval_fn(num):
    list_val = []
    a = num - 1
    while(a > 0):
        if(a % 3 == 0 or a % 5 == 0):
            list_val.append(a)
        else:
            pass
        a = a - 1
    print(list_val)
input_fn()