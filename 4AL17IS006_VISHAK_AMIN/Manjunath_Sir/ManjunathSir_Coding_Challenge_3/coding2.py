
def check_prime(n):
    flag = 0
    for i in range(2, n//2 + 1):
        if (n % i == 0):
            flag = 1
            break
    if flag == 0:
        return 1
    else:
        return 0


def alternate_prime(n):
    count = 0

    for i in range(2, n):
        if check_prime(i) == 1:
            if count % 2 == 0:
                print(i, end=" ")
            count += 1


if __name__ == "__main__":
    n = int(input())
    alternate_prime(n)
