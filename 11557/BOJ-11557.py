t = int(input())

for _ in range(t):
  n = int(input())
  mcons = 0
  ms = ''
  
  for _ in range(n):
    s, cons = input().split()
    cons = int(cons)
    
    if mcons < cons:
      mcons = cons
      ms = s
  
  print(ms)
