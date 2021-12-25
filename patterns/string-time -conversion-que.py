s="07:05:45PM"
p=int(s[:2])
v=p+1
print(v)  
print(s[:-2])

import re
text = 'The quick brown\nfox jumps*over the lazy dog.'
print(re.split('; |, |\*|\n',text))