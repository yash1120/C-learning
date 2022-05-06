a=input("Enter a binary number: ")
b=int(input("Enter 2nd number: "))
def left_shift(a):
    return (a+"0")
def right_shift(a):
    s=a[:-1]
    return ("0"+s)
ch=int(input("Enter 0 for left shift and 1 for right shift: "))
if(ch==0):
    for i in range(0,b):
        a=left_shift(a)
else:
    for i in range(0,b):
        a=right_shift(a)
print(a)