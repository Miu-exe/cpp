#10 probleme de exersare (use elif)
#1. Pozitiv, negativ sau zero.
#2. Compară două numere și afișează relația dintre ele.
#3. Afișează maximul dintre trei numere.
#4. Afișează minimul dintre trei numere.
#5. Verifică divizibilitatea cu 3 și 5.
#6. Verifică divizibilitatea cu 3 sau 5.
#7. Transformă o notă într-un calificativ pe intervale.
#8. Verifică dacă trei lungimi pot forma un triunghi.
#9. Verifică dacă un an este bisect.
#10. Ordonează trei numere crescător.

#1
nr = int(input("nr = "))
if nr > 0:
    print("nr e pozitiv")
elif nr < 0:
    print("nr e negativ")
else:
    print("nr e zero")

#2
a = int(input("a = "))
b = int(input("b = "))
if a > b:
    print("a > b")
elif a < b:
    print("a < b")
else:
    print("a = b")

#3
a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))
if a >= b and a >= c:
    print("maximul este", a)
elif b >= a and b >= c:
    print("maximul este", b)
else:
    print("maximul este", c)

#4
if a <= b and a <= c:
    print("minimul este", a)
elif b <= a and b <= c:
    print("minimul este", b)
else:
    print("minimul este", c)

#5
nr = int(input("nr = "))
if nr % 3 == 0 and nr % 5 == 0:
    print("nr e divizibil si cu 3 si cu 5")
elif nr % 3 == 0:
    print("nr e divizibil doar cu 3")
elif nr % 5 == 0:
    print("nr e divizibil doar cu 5")
else:
    print("nr nu e divizibil nici cu 3, nici cu 5")

#6
if nr % 3 == 0 or nr % 5 == 0:
    print("nr e divizibil cu 3 sau cu 5")
else:
    print("nr nu e divizibil nici cu 3, nici cu 5")

#7
nota = float(input("nota = "))
if nota < 1 or nota > 10:
    print("nota invalida")
elif nota >= 9:
    print("foarte bine")
elif nota >= 7:
    print("bine")
elif nota >= 5:
    print("suficient")
else:
    print("insuficient")

#8
x = float(input("latura 1 = "))
y = float(input("latura 2 = "))
z = float(input("latura 3 = "))
if x <= 0 or y <= 0 or z <= 0:
    print("laturile trebuie sa fie pozitive")
elif x + y <= z:
    print("nu formeaza triunghi")
elif x + z <= y:
    print("nu formeaza triunghi")
elif y + z <= x:
    print("nu formeaza triunghi")
else:
    print("formeaza triunghi")

#9
an = int(input("an = "))
if an % 400 == 0:
    print("an bisect")
elif an % 100 == 0:
    print("an nebisect")
elif an % 4 == 0:
    print("an bisect")
else:
    print("an nebisect")

#10
a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))
if a <= b and b <= c:
    print(a, b, c)
elif a <= c and c <= b:
    print(a, c, b)
elif b <= a and a <= c:
    print(b, a, c)
elif b <= c and c <= a:
    print(b, c, a)
elif c <= a and a <= b:
    print(c, a, b)
else:
    print(c, b, a)
