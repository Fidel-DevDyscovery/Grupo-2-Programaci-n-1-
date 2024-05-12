numeros = [0] * 10
contpos = 0
contneg = 0
contceros = 0

for i in range(10):
    numeros[i] = int(input("Ingrese un número entero: "))

for numero in numeros:
    if numero == 0:
        contceros += 1
    elif numero > 0:
        contpos += 1
    else:
        contneg += 1

print("Hay", contceros, "números ceros")
print("Hay", contneg, "números negativos")
print("Hay", contpos, "números positivos")