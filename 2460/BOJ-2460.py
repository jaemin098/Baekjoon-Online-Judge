remain = 0
max_ps = 0

for _ in range(10):
  drop, ride = map(int, input().split())
  remain = remain - drop + ride
  max_ps = max(remain, max_ps)

print(max_ps)
