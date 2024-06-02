plts = input()

ans = 10

for i in range(1, len(plts)):
  if plts[i] == plts[i - 1]:
    ans += 5
  else:
    ans += 10

print(ans)
