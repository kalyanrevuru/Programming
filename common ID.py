def common_member(a, b):
    a_set = set(a)
    b_set = set(b)

    if (a_set & b_set):
        print(len(a_set & b_set))
        return True
    else:
        print("0")
        return False


def divisors(n):
    i = 1
    divs = []
    while i < n:
        if (n % i == 0):
            divs.append(i)
        i = i + 1
    for div in divs:
        l = [int(d) for d in str(div)]
        m = [int(d) for d in str(n)]
        if common_member(l, m):
            break


x = int(input())
l = divisors(x)
