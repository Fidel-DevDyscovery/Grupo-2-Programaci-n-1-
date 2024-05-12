num_alumnos = int(input("Introduce el número de alumnos: "))
alturas = []

for i in range(num_alumnos):
    altura = float(input(f"Altura del alumno {i+1}: "))
    alturas.append(altura)

media = sum(alturas) / len(alturas)

print("\nAlturas de los alumnos:")
for i, altura in enumerate(alturas, 1):
    print(f"Alumno {i}: {altura}")

mas_altos = sum(altura > media for altura in alturas)
mas_bajos = sum(altura < media for altura in alturas)

print(f"Número de alumnos más altos que la media: {mas_altos}")
print(f"Número de alumnos más bajos que la media: {mas_bajos}")