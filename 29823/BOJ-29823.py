n = int(input())
directions = list(input())

x, y = 0, 0

for i in directions:
  if i == 'E':
    x += 1
  elif i == 'W':
    x -= 1
  elif i == 'N':
    y += 1
  elif i == 'S':
    y -= 1

steps = abs(x) + abs(y)
print(steps)
