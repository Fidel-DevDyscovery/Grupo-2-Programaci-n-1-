numeros = []
sumadepositivos = 0
sumadenegativos = 0
contpos = 0
contneg = 0

for _ in range(10):
    numero = int(input("Ingrese un número entero diferente de 0, positivo o negativo: "))
    numeros.append(numero)
    if numero > 0:
        sumadepositivos += numero
        contpos += 1
    elif numero < 0:
        sumadenegativos += numero
        contneg += 1

if contpos != 0:
    mediadepositivos = sumadepositivos / contpos
else:
    mediadepositivos = 0

if contneg != 0:
    mediadenegativos = sumadenegativos / contneg
else:
    mediadenegativos = 0

print("La media de los valores positivos es:", mediadepositivos)
print("La media de los valores negativos es:", mediadenegativos)