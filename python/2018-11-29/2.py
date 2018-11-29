s = 'ajldjlajfdljfddd'
l = []
for i in s:
    if i not in l:
        l.append(i)
l.sort()
ss = ''
for i in l:
  ss = ss + i  
print(ss)
