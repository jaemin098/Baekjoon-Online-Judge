while True:
  s = input()
  if s == '#':
    break
    
  cnt = 0
  for c in s:
    if c in 'aeiouAEIOU':
      cnt = cnt + 1
      
  print(cnt)
