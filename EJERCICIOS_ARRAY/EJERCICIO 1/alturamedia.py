sumadealturas = 0
superiores = 0
inferiores = 0

n = int(input("Ingrese la cantidad de personas a las que va a pedir su altura: "))
alturas = []
for _ in range(n):
    altura = int(input("Ingrese la altura de la persona en cm: "))
    alturas.append(altura)
    sumadealturas += altura

alturamedia = sumadealturas / n

for altura in alturas:
    if altura <= alturamedia:
        superiores += 1
    else:
        inferiores += 1

print(superiores, "personas tienen una altura superior a la media")
print(inferiores, "personas tienen una altura inferior a la media")