


def mul(people,days):
    if days == 0:
        return 0

    if days == 1:
        return people
    else:

        return people + mul(people,days-1)


people = 1200000
days = 365
res = mul(people,days)
print(res)