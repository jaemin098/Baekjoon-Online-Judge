n = int(input())

price = 0
for _ in range(n):
  pips1, pips2, pips3 = map(int, input().split())
  
  if pips1 == pips2 == pips3:
    price = max(price, 10000 + pips1 * 1000)
  elif pips1 == pips2 or pips1 == pips3:
    price = max(price, 1000 + pips1 * 100)
  elif pips2 == pips3:
    price = max(price, 1000 + pips2 * 100)
  else:
    price = max(price, max(pips1, pips2, pips3) * 100)

print(price)
