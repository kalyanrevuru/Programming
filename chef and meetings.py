import datetime as dt


def isNowInTimePeriod(startTime, endTime, nowTime):

    if startTime <= endTime:
        return nowTime >= startTime and nowTime <= endTime


def convert24(str1):

    if str1[-2:] == "AM" and str1[:2] == "12":
        return "00" + str1[2:-2]

    elif str1[-2:] == "AM":
        return str1[:-2]

    elif str1[-2:] == "PM" and str1[:2] == "12":
        return str1[:-2]

    else:
        return str(int(str1[:2]) + 12) + str1[2:5]


t = int(input())
for _ in range(t):
    p1 = convert24(input())
    n = int(input())
    ans = []
    for x in range(n):
        sample_list = list(input().split())
        l1, r1 = convert24(
            sample_list[0]+sample_list[1]), convert24(sample_list[2]+sample_list[3])
        nowTime = dt.time(int(p1[:2]), int(p1[3:]))
        startTime = dt.time(int(l1[:2]), int(l1[3:]))
        endTime = dt.time(int(r1[:2]), int(r1[3:]))
        if isNowInTimePeriod(startTime, endTime, nowTime):
            ans.append('1')
        else:
            ans.append('0')
    print("".join(i for i in ans))
