vowels = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']

for _ in range(int(input())):
  s = input()
  
  cons, vows = 0, 0
  for i in s:
    if i in vowels:
      vows += 1
    elif i.isalpha():
      cons += 1
  
  print(cons, vows)
