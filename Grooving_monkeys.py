def Minimum_seconds(monkeys_pattern):
    Pattern = monkey_pattern
    Buffer = [0] * len(Pattern)  # initialising Buffer with 0's
    count = 0  # initialising count to 0
    while (Buffer != monkey_pattern):
        count += 1  # incrementing count
        Buffer = [0] * len(monkey_pattern)  # again initialising Buffer with 0's
        for i in range(len(monkey_pattern)):
            Buffer[monkey_pattern[i] - 1] = Pattern[i]
        Pattern = monkey_pattern

    return (count)


t = int(input())  # number of test cases
for i in range(t):
    N = int(input())  # number of monkeys
    monkey_pattern = list(map(int, input().split()))  # monkeys initial dancing pattern
    min_sec = Minimum_seconds(monkey_pattern)  # minimum number of seconds to retain original pattern
    print(min_sec)
