ms, mn = '', 0

for _ in range(7):
  s, n = input().split()
  
  if mn < int(n):
    mn = int(n)
    ms = s

print(ms)
