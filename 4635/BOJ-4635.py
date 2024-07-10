while True:
  n = int(input())
  if n == -1: break
  
  dist, time = 0, 0
  for _ in range(n):
    s, t = map(int, input().split())
    dist += s * (t - time)
    time = t
  
  print(f"{dist} miles")
