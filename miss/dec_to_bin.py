num=int(input("enter the numebr"))
b=int(input("enter the target base"))
bin= " "
while(num>0):
    a=num%b
    num=num//b
    if(a<=9):
        bin=str(a)+bin
    else:
        d=chr(a+55)
        bin=(d)+bin
print(bin)
    
