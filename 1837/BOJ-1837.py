p, k = map(int, input().split())

flg = True
for r in range(2, k):
  if p % r == 0:
    print("BAD", r)
    flg = False
    break

if flg: print("GOOD")
