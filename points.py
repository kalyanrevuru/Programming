def check(x, y):
    a = x[0]
    b = x[1]
    c = y[0]
    d = y[1]
    if(a <= c and c <= d and d <= b):
        return True
    else:
        return False


points = []
for n in range(int(input())):
    p = list(map(int, input().split()))
    x = p[0]
    y = p[1]
    points.append([x, y])


for i in range(0, len(points)):
    index = []
    for j in range(1, len(points)):
        if check(points[i], points[j]):
            index.append(1)
        else:
            index.append(-1)
    if(len(set(index)) == 1):
        print(i+1)
