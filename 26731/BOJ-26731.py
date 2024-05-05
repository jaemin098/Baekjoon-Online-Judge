import string

str1 = input()

for alph in string.ascii_uppercase:
  if alph not in str1:
    print(alph)
    break
