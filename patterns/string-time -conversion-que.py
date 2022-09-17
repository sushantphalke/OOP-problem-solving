import re
s = "07:05:45PM"
p = int(s[:2])
v = p+1
print(v)
print(s[:-2])

text = 'The quick brown:fox jumps*over the lazy dog.'
print(re.split(',|\*|\:', text))
if s[-2:] == "PM":
    hours = str(int(s[:2])+12)
    atime = s[:-2]
    btime = atime[2:]
    time = hours+btime
if s[-2:]=="AM":
    time=s.lstrip('AM')
