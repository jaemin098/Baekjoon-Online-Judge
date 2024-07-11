n = int(input())
txt1, txt2 = input(), input()

cnt = 0
for i in range(n):
  if txt1[i] != txt2[i]: cnt += 1

print(cnt)
