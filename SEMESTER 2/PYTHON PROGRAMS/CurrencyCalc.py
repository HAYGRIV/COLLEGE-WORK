TotalAmount=int(input("ENTER TOTAL AMOUNT:"))

#CALCULATING NUMBER OF NOTES($2000,$500,$10)
t=TotalAmount//2000
temp=TotalAmount%2000
h=temp//500
tt=temp%500
print(t,h,tt)
