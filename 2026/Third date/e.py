import re

s = input()

s = re.sub(r'mesero', r'taquero', s)

print(s)