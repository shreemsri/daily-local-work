a="ABES2000"
c=0
s=0
for d in a:
    if(d.isalpha()):
        c+=1
    if(d.isdigit()):
        s+=1
print(c,s)
