def twos_comp(b):
    c=""
    flag=0
    for i in range(len(b)-1,-1,-1):
        if(flag==0):
            c=b[i]+c
        else:
            if(b[i]=="1"):
                c="0"+c
            else:
                c="1"+c
        if(b[i]=="1"):
            flag=1
    return c

a=input("Enter 1st number: ")
b=input("Enter 2nd number: ")
sum=""
carry="0"

if len(a)>len(b):
    for i in range(0,len(a)-len(b)):
        b="0"+b
else:
    for i in range(0,len(b)-len(a)):
        a="0"+a

c=twos_comp(b)
print(c)
for i in range(len(a)-1,-1,-1):
    if(a[i]==c[i]):
        sum=carry+sum
        if(a[i]=="0"):
            carry="0"
        else:
            carry="1"
    else:
        if carry=="0":
            sum="1"+sum
            carry="0"
        else:
            sum="0"+sum
            carry="1"
if(carry=="0"):
    print("-",twos_comp(sum))
else:
    print(sum)