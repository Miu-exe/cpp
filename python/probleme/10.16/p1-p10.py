#10 probleme de exersare 
#1. Aplică o reducere de 10% unui produs de minimum 100 lei.
#2. Calculează salariul din număr de ore × tarif.
#3. Calculează numeric IMC-ul din greutate și înălțime.
#4. Calculează media a trei note și spune dacă elevul este promovat.
#5. Determină perioada zilei în funcție de oră.
#6. Verifică dacă toate cifrele unui număr de trei cifre sunt egale.
#7. Verifică dacă un număr de trei cifre este palindrom.
#8. Verifică și clasifică un triunghi.
#9. Construiește un mini-calculator pentru +, -, *, /.
#10. Aplică reduceri de 5% / 10% în funcție de valoarea cumpărăturilor.

#1
pret = float(input("pretul produsului = "))
if pret < 0:
    print("pret invalid")
elif pret >= 100:
    print("pret cu reducere de 10%:", pret * 0.9)
else:
    print("fara reducere:", pret)

#2
ore = float(input("numar de ore = "))
tarif = float(input("tarif pe ora = "))
if ore < 0:
    print("numar de ore invalid")
elif tarif < 0:
    print("tarif invalid")
else:
    print("salariul este:", ore * tarif)

#3
greutate = float(input("greutate (kg) = "))
inaltime = float(input("inaltime (m) = "))
if greutate <= 0:
    print("greutate invalida")
elif inaltime <= 0:
    print("inaltime invalida")
else:
    imc = greutate / (inaltime ** 2)
    print("IMC =", imc)
    if imc < 18.5:
        print("subponderal")
    elif imc < 25:
        print("normal")
    elif imc < 30:
        print("supraponderal")
    else:
        print("obezitate")

#4
n1 = float(input("nota 1 = "))
n2 = float(input("nota 2 = "))
n3 = float(input("nota 3 = "))
if n1 < 1 or n1 > 10:
    print("nota 1 invalida")
elif n2 < 1 or n2 > 10:
    print("nota 2 invalida")
elif n3 < 1 or n3 > 10:
    print("nota 3 invalida")
else:
    media = (n1 + n2 + n3) / 3
    print("media =", media)
    if media >= 5:
        print("promovat")
    else:
        print("nepromovat")

#5
ora = int(input("ora (0-23) = "))
if ora < 0 or ora > 23:
    print("ora invalida")
elif ora < 5:
    print("noapte")
elif ora < 12:
    print("dimineata")
elif ora < 18:
    print("dupa-amiaza")
elif ora < 22:
    print("seara")
else:
    print("noapte")

#6
nr = int(input("nr de 3 cifre = "))
if nr < 100 or nr > 999:
    print("nu are 3 cifre")
elif nr % 10 == nr // 10 % 10 == nr // 100:
    print("toate cifrele sunt egale")
else:
    print("cifrele nu sunt toate egale")

#7
nr = int(input("nr de 3 cifre = "))
if nr < 100 or nr > 999:
    print("nu are 3 cifre")
elif nr % 10 == nr // 100:
    print("este palindrom")
else:
    print("nu este palindrom")

#8
a = float(input("latura a = "))
b = float(input("latura b = "))
c = float(input("latura c = "))
if a <= 0 or b <= 0 or c <= 0:
    print("laturile trebuie sa fie pozitive")
elif a + b <= c or a + c <= b or b + c <= a:
    print("nu formeaza un triunghi")
elif a == b == c:
    print("triunghi echilateral")
elif a == b or a == c or b == c:
    print("triunghi isoscel")
elif a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2:
    print("triunghi dreptunghic")
else:
    print("triunghi oarecare")

#9
x = float(input("x = "))
op = input("operatia (+, -, *, /) = ")
y = float(input("y = "))
if op == "+":
    print(x + y)
elif op == "-":
    print(x - y)
elif op == "*":
    print(x * y)
elif op == "/":
    if y == 0:
        print("nu se poate imparti la 0")
    else:
        print(x / y)
else:
    print("operatie invalida")

#10
suma = float(input("valoarea cumparaturilor = "))
if suma < 0:
    print("valoare invalida")
elif suma >= 500:
    print("reducere 10%, de plata:", suma * 0.9)
elif suma >= 200:
    print("reducere 5%, de plata:", suma * 0.95)
else:
    print("fara reducere, de plata:", suma)
