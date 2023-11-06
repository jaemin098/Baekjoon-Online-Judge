str = input()

word = ['M', 'O', 'B', 'I', 'S']
res = True

for i in word:
  if i not in str:
    res = False
    break

if res:
  print('YES')
else:
  print('NO')
