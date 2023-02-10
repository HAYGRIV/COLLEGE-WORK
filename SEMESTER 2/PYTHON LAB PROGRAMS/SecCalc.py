num= int(input("ENTER NUMBER OF SECONDS:"))

hr=num//3600
temp=num%3600
m=temp//60
sec=temp%60

print(hr,":",m,":",sec)
