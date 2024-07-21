s = []
for _ in range(int(input())):
    s.append(input())

val = 0
if "botswana" in s:
    val += 0

if "ethiopia" in s:
    val += 50
    
if "kenya" in s:
    val += 50
    
if "namibia" in s:
    if "south-africa" in s[:s.index("namibia")]:
        val += 40
    else:
        val += 140
    
if "south-africa" in s:
    val += 0
    
if "tanzania" in s:
    val += 50

if "zambia" in s and "zimbabwe" in s:
    if abs(s.index("zambia") - s.index("zimbabwe"))==1:
        val += 50
    else:
        val += 80
  
elif "zambia" in s:
    val += 50
    
elif "zimbabwe" in s:
    val += 30

print(val)
