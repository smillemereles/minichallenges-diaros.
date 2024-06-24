def contar_vocales(cadena):
    # Convertir la cadena a minúsculas para contar sin distinguir mayúsculas y minúsculas
    cadena = cadena.lower()
    
    # Definir un conjunto de vocales
    vocales = {'a', 'e', 'i', 'o', 'u'}
    
    # Inicializar contador de vocales
    contador = 0
    
    # Iterar sobre cada carácter de la cadena
    for caracter in cadena:
        # Incrementar el contador si el carácter es una vocal
        if caracter in vocales:
            contador += 1
    
    return contador

# Solicitar al usuario que ingrese una cadena
cadena = input("Ingrese una cadena para contar las vocales: ")

# Obtener el número de vocales en la cadena ingresada
num_vocales = contar_vocales(cadena)

# Mostrar el resultado
print(f"El número de vocales en '{cadena}' es: {num_vocales}")
