def tabla_de_multiplicar(numero):
    print(f"Tabla de multiplicar del {numero}:")
    for i in range(1, 11):
        resultado = numero * i
        print(f"{numero} x {i} = {resultado}")

try:
    numero = int(input("Ingrese un número para ver su tabla de multiplicar: "))
    tabla_de_multiplicar(numero)
except ValueError:
    print("Error: Ingrese un número válido.")
