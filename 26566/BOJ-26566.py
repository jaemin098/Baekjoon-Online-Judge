from math import pi

for _ in range(int(input())):
  a1, p1 = map(float, input().split())
  r1, p2 = map(float, input().split())
  
  v1, v2 = a1 / p1, (pi * r1 ** 2) / p2
  print(["Slice of pizza", "Whole pizza"][v1 < v2])
