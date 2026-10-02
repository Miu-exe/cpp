#6. Transformă secunde în ore, minute și secunde.
a = int(input("sec = "))
h = a // 3600
m = a % 3600 // 60
s = a % 60
print(h, "ore", m, "minute", s, "secunde")
