v = int(input())

li = list(input())

if li.count('B') < li.count('A'):
  print('A')
elif li.count('A') < li.count('B'):
  print('B')
else:
  print('Tie')
