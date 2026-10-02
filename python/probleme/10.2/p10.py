#10. Calculează suma cifrelor unui număr de trei cifre.
a = int(input("nr ="))
s = 0
while a>0:
    s+=(a%10)
    a = a // 10
print(s)