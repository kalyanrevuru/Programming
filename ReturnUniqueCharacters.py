s = input()
freq = [0] * 26

for i in range(0, len(s)):
    if s[i] != ' ':
        freq[ord(s[i]) - ord('a')] += 1
res = ""
for i in range(len(s)):
    if freq[ord(s[i])-ord('a')] == 1:
        res += s[i]
print(res)
