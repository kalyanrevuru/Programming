#sum of elements of all the reverse diagonals of a matrix of size nxn

n = int(input())
a = []
for i in range(n):
    l = list(map(int, input().split()))
    a.append(l)
ind = []
for i in range(0, n):
    for j in range(0, n):
        ind.append((i, j))
sum_a = []
for k in range(2 * n - 1):
    E = []
    s = 0
    for i, j in ind:
        if i+j == k:
            E.append((i, j))
    for i, j in E:
        s += a[i][i]
    sum_a.append(s)

print(sum_a)
