a = int(input())


def getlen(year):
    year += 1
    year_str = str(year)
    year_set = set(map(int,year_str))
    if (len(year_str) == len(year_set)):
        print(year)
    else:
        getlen(year)

getlen(a)
