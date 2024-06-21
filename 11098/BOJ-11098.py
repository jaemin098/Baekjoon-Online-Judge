n = int(input())

for _ in range(n):
  p = int(input())
  
  max_c, max_n = 0, ''
  for _ in range(p):
    c, name = input().split()
    if max_c < int(c):
      max_c = int(c)
      max_n = name

print(max_n)
