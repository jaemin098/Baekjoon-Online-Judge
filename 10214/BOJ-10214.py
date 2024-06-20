t = int(input())

for _ in range(t):
  ys, kr = 0, 0
  
  for _ in range(9):
    y, k = map(int, input().split())
    
    ys += y
    kr += k
  
  if kr < ys:
    print('Yonsei')
  elif ys < kr:
    print('Korea')
  else:
    print('draw')
