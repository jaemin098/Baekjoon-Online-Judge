n = int(input())
k = int(input())
q = min(n, k + 60)

ans = q * 1500 + (n - q) * 3000
print(ans)
