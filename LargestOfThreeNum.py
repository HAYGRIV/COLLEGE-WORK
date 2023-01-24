a=int(input("ENTER FIRST NUMBER:"))
b=int(input("ENTER SECOND NUMBER:"))
c=int(input("ENTER THIRD NUMBER:"))

#CALCULATING LARGEST AMONG THREE

if(a>b):
    if(a>c):
        print("a IS LARGEST...")
    else:
        print("c IS LARGEST...")
else:
    if(b>c):
        print("b IS LARGEST...")
    else:
        print("c IS LARGEST...")