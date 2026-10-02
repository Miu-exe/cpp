#7. Extrage cifrele unui număr de două cifre.
a = int(input("nr = "))
while a>0:
    print(a%10)
    a = a//10 
