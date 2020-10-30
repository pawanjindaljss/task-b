digs = '0123456789ABCDEFGHIJKLMNOPQRSTUVWSYZ'
def int2base(x, base):
  global digs
  if x < 0:
    sign = -1
  elif x == 0:
    return digs[0]
  else:
    sign = 1
  x *= sign
  digits = []
  while x:
    digits += [digs[int(x%base)]]
    x /= base
  if sign < 0:
    digits += ['-']
  digits = digits[::-1]
  return ''.join(digits)

a =int(input())
z = input()
c = int(input())
b = digs.index(z)
for i in list(range(b+1,37)):
  temp = int2base(a,i)
  # print(temp)
  if temp[-c-1] == z:
    print(i,end=" ")