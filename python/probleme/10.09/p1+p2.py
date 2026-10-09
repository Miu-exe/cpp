#1. Spune dacă un număr este pozitiv sau negativ.
#2. Verifică dacă un număr este par sau impar.
#3. Afișează maximul dintre două numere.
#4. Verifică dacă două numere sunt egale.
#5. Verifică dacă un număr este divizibil cu 5.
#6. Verifică dacă este divizibil cu 3.
#7. Spune dacă o persoană este majoră sau minoră.
#8. Calculează valoarea absolută fără abs().
#9. Calculează diferența în valoare absolută.
#10. Pentru un număr de două cifre, afișează cifra mai mare.
nr = int(input("se da numarul: "))
if nr >= 0:
    print("nr e pozitiv")
else:
    print("nr e negativ")
if nr % 2 == 0:
    print("nr e par")
else:
    print("nr e impar")
a = int(input("a = "))
b = int(input("b = "))
if a >= b:
    print("a este mai mare ca b")
else:
    print("b este mai mare ca a")
if a == b:
    print("a = b")
if nr % 5 == 0:
    print("nr este divizibil cu 5")
if nr % 3 == 0:
    print("nr este divizibil cu 3")
varsta = int(input("varsta = "))
if varsta < 18:
    print("minor")
else:
    print("major")
if nr < 0:
    print(nr*-1)
else:
    print(nr)
if a > b:
    print(a - b)
else:
    print(b - a)
nr2cif = int(input("nr de 2 cifre = "))
a = nr2cif % 10
b = (nr2cif / 10) % 10
if a > b:
    print(a)
else:
    print(b)