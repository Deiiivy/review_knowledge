
while True:

    num = input("Ingresa un numero: ")

    try:
        if int(num) % 2 == 0:
            print(f"El numero: {num} es par")
        elif int(num) % 2 == 1:
            print(f"El numero: {num} es impar")
    except ValueError:
        print(f"El numero: {num} no es un entero valido")

    user_input = int(input(" ----- ¿Quieres seguir? \n ingresa 1: para seguir. \n ingresa 2: para salir ----- \n "))

    try:
        if user_input == 2:
            print("Adios!")
            break
    except ValueError:
        print("INgresa una opcion valida")
