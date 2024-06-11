n = int(input())

dots = 0

for i in range(n + 1):
  for j in range(i + 1):
    dots += i + j

print(dots)
