from flask import Blueprint, render_template

app_router = Blueprint('app_router', __name__)

@app_router.route('/')
def index():
    return render_template('index/index.html')


@app_router.route('/algoritmos-simples')
def algoritm_simples():
    lista_1 = [
        {
            'id': 1,
            'titulo': 'Ejercicio 1',
            'description': ['Algoritmo que permita el ingreso de dos números enteros y calcule la división de ambos números.']
        },
        {
            'id': 2,
            'titulo': 'Ejercicio 2',
            'description': ['Algoritmo que convierta soles a dólares.']
        },
        {
            'id': 3,
            'titulo': 'Ejercicio 3',
            'description': ['Algoritmo que convierta kilómetros en metros y en centímetros.']
        },
        {
            'id': 4,
            'titulo': 'Ejercicio 4',
            'description': ['Algoritmo que convierta horas en minutos y en segundos.']
        },
        {
            'id': 5,
            'titulo': 'Ejercicio 5',
            'description': ['Algoritmo que convierta grados Celsius a grados Fahrenheit.']
        },
        {
            'id': 6,
            'titulo': 'Ejercicio 6',
            'description': ['Algoritmo que eleve al cubo un número entero.']
        },
        {
            'id': 7,
            'titulo': 'Ejercicio 7',
            'description': ['Algoritmo que calcule la distancia (MRU) sabiendo la velocidad y el tiempo recorrido por un móvil.']
        },
        {
            'id': 8,
            'titulo': 'Ejercicio 8',
            'description': ['Algoritmo que calcule el salario mensual, sabiendo el número de horas trabajadas y el valor por hora.']
        },
        {
            'id': 9,
            'titulo': 'Ejercicio 9',
            'description': ['Un docente desea saber el porcentaje de varones y mujeres que hay en un salón de clases; realice el algoritmo respectivo.']
        },
        {
            'id': 10,
            'titulo': 'Ejercicio 10',
            'description': ['Un alumno desea saber el promedio de sus calificaciones teniendo en cuenta que:', '- El promedio de sus 4 tareas académicas es el 60% del promedio final.', '- El examen de medio curso es el 15% del promedio final.', '- El examen final es el 25% del promedio final.']
        },
        {
            'id': 11,
            'titulo': 'Ejercicio 11',
            'description': ['Algoritmo que calcule el nuevo salario de un obrero, si obtuvo un incremento del 25% sobre su salario anterior.']
        },
    ]
    return render_template('algoritmos/a-simples.html', lista_1=lista_1)


@app_router.route('/algoritmos-condicionales')
def algoritm_condicion():
    lista_1 = [
            {
                'id': 1,
                'titulo': 'Ejercicio 1',
                'description': ['Dado un número entero, determinar si es positivo, negativo o cero.']
            },
            {
                'id': 2,
                'titulo': 'Ejercicio 2',
                'description': ['Dado un número natural, determinar si es cero, par o impar.']
            },
            {
                'id': 3,
                'titulo': 'Ejercicio 3',
                'description': ['Dado las 4 notas de tareas académicas, el emc y el de fin de curso, calcule su promedio e imprima el mensaje respectivo o si ingresa al sustitutorio. En caso afirmativo, reemplazar la menor nota (emc o efc) con el sustitutorio y hallar el nuevo promedio final.']
            },
            {
                'id': 4,
                'titulo': 'Ejercicio 4',
                'description': ['Determinar si un número entero es divisible entre otro.']
            },
            {
                'id': 5,
                'titulo': 'Ejercicio 5',
                'description': ['Leer dos valores numéricos e imprimir en orden ascendente.']
            },
            {
                'id': 6,
                'titulo': 'Ejercicio 6',
                'description': ['Leer la edad de una persona y escriba el mensaje respectivo si es mayor o menor de edad.']
            },
            {
                'id': 7,
                'titulo': 'Ejercicio 7',
                'description': ['Hacer un programa que reciba datos de una persona y le dé una categoría según el siguiente criterio:', 'a) Adulto profesionista, si tiene un título y trabajo y tiene entre 20 y 50 años.', 'b) Adulto desempleado, si no tiene trabajo y tiene entre 20 y 50 años.', 'c) Joven estudiante, si estudia y tiene entre 15 y 20 años.', 'd) Joven desempleado, si no estudia y tiene entre 15 y 20 años.', 'e) Joven empleado, si no tiene título y trabaja, entre 15 y 20 años de edad.']
            },
            {
                'id': 8,
                'titulo': 'Ejercicio 8',
                'description': ['Construir un programa que calcule el índice de masa corporal de una persona (IMC = peso [kg] /altura2 [m]) e indique el estado en el que se encuentra esa persona en función del valor de IMC:', 'Valor de IM< 16 Criterio de ingreso al hospital', 'de 16 a 17 infrapeso', 'de 17 a 18 bajo peso', 'de 18 a 25 peso normal (saludable)', 'de 25 a 30 sobrepeso (obesidad de grado I)', 'de 30 a 35 sobrepeso crónico (obesidad de grado II)', 'de 35 a 40 obesidad premórbida (obesidad de grado III)', '>40 obesidad mórbida (obesidad de grado IV)', 'Nota 1: se recomienda el empleo de sentencias if - else anidadas.', 'Nota 2: Los operandos (peso y altura) deben ser introducidos por teclado por el usuario.']
            },
            {
                'id': 9,
                'titulo': 'Ejercicio 9',
                'description': ['Se reciben tres enteros positivos en forma ascendente a<=b<=c. Estos, pueden representar las longitudes de los lados de un triángulo si cumplen con (a + b)>c.', 'Si realmente representan un triángulo, encuentre su área e indique si es equilátero, isósceles o escaleno.', 'El área del triángulo se calcula mediante la siguiente fórmula:', 'Área =   √ s*(s-a) *(s-b) *(s-c)', 'Donde: s es la mitad de la suma de los lados a, b y c.']
            },
            {
                'id': 10,
                'titulo': 'Ejercicio 10',
                'description': ['Dado un valor de “x” calcular el valor de “y” según la siguiente función:', '3x + 36 sí x <= 11', '2x - 10 sí 11 < x <= 33', 'x + 6 sí 33 < x <= 64', 'Y 0 para los demás valores de x']
            },
    ]

    return render_template('algoritmos/a-condicionales.html', lista_1=lista_1)


@app_router.route('/bucles-mq')
def bucle_mq():
    lista_1 = [
            {
                'id': 1,
                'titulo': 'Ejercicio 1',
                'description': ['Que permita el ingreso de una edad y evalúe si es mayor o menor de edad e imprima el mensaje respectivo.', 'Nota: la edad debe estar entre 1 y 100 años solamente; si no debe volver a pedir edad.']
            },
            {
                'id': 2,
                'titulo': 'Ejercicio 2',
                'description': ['Que permita evaluar si un número se encuentra en un rango determinado de números; si no lo está, debe volver a pedir número. El rango debe ser ingresado por el usuario.']
            },
            {
                'id': 3,
                'titulo': 'Ejercicio 3',
                'description': ['Que permita el ingreso del nombre de un alumno y tres notas, imprimir su promedio y si está o no aprobado. Tener en cuenta que las notas deben estar en el rango de 0 a 20 solamente si no debe volver a pedir.']
            },
            {
                'id': 4,
                'titulo': 'Ejercicio 4',
                'description': ['Que pida un número y pregunte si desea continuar si o no; en caso afirmativo, que continúe pidiendo números, sino que se detenga e imprima la suma de todos los números ingresados.', "Nota el 's' o 'n' ingresados deben estar entre apóstrofes."]
            },
            {
                'id': 5,
                'titulo': 'Ejercicio 5',
                'description': ['Modifique el algoritmo anterior para que al final también imprima la cantidad de datos ingresados y el promedio de los datos.']
            },
            {
                'id': 6,
                'titulo': 'Ejercicio 6',
                'description': ['Que imprima del 1 al 10 usando el bucle while o MQ (Mientras Que).']
            },
            {
                'id': 7,
                'titulo': 'Ejercicio 7',
                'description': ['Que imprima del N2 al N1 usando el bucle while o MQ (Mientras Que). Donde N2 > N1.']
            },
            {
                'id': 8,
                'titulo': 'Ejercicio 8',
                'description': ['Que realice la tabla de multiplicar del número N (del 1 al 20).']
            },
            {
                'id': 9,
                'titulo': 'Ejercicio 9',
                'description': ['Que muestre la raíz cuadrada, el cuadrado y el cubo de los N primeros números naturales.']
            },
            {
                'id': 10,
                'titulo': 'Ejercicio 10',
                'description': ['Que pida la cantidad de números a ingresar e imprima la suma de solo los números pares ingresados.']
            },
    ]
    return render_template('bucles/a-buclemq.html', lista_1=lista_1)


@app_router.route('/bucle-for')
def bucle_for():
    lista_1 = [
            {
                'id': 1,
                'titulo': 'Ejercicio 1',
                'description': ['Que imprima los primeros 15 números de la tabla de multiplicar del número N (N debe estar entre 1 y 100).']
            },
            {
                'id': 2,
                'titulo': 'Ejercicio 2',
                'description': ['Que imprima los N primeros elementos de la serie:', '1 - 13', '2 - 15', '3 - 17', '...']
            },
            {
                'id': 3,
                'titulo': 'Ejercicio 3',
                'description': ['Que imprima los N primeros elementos de la serie:', '1 - 100 - 7', '2 - 95 - 9', '3 - 90 - 11', '...']
            },
            {
                'id': 4,
                'titulo': 'Ejercicio 4',
                'description': ['Que imprima los N primeros múltiplos de 3:', '1 - No es múltiplo de 3', '2 - No es múltiplo de 3', '3 - Si es múltiplo de 3', '4 - No es múltiplo de 3']
            },
            {
                'id': 5,
                'titulo': 'Ejercicio 5',
                'description': ['Que permita el ingreso de N números e imprima si es Par o Impar']
            },
            {
                'id': 6,
                'titulo': 'Ejercicio 6',
                'description': ['Que imprima la suma de los N primeros elementos de la serie: 3 6 9 …']
            },
            {
                'id': 7,
                'titulo': 'Ejercicio 7',
                'description': ['Modificar el programa anterior para que además imprima la suma y promedio de los pares y de los impares respectivamente.']
            },
            {
                'id': 8,
                'titulo': 'Ejercicio 8',
                'description': ['Que imprima la suma de los N primeros elementos de la serie: ½ + ¼ + 1/6 ….']
            },
            {
                'id': 9,
                'titulo': 'Ejercicio 9',
                'description': ['Que determine si el número que ingresa el usuario es primo o no.']
            },
            {
                'id': 10,
                'titulo': 'Ejercicio 10',
                'description': ['Que multiplique dos números pero sin usar *']
            },
            {
                'id': 11,
                'titulo': 'Ejercicio 11',
                'description': ['Que imprima y sume los N primeros elementos de la serie de Fibonacci.']
            }
    ]
    return render_template('bucles/a-buclefor.html', lista_1=lista_1)

@app_router.route('/arreglos')
def arrays():
    lista_1 = [
            {
                'id': 1,
                'titulo': 'Ejercicio 1',
                'description': ['Que ingrese N elementos a un arreglo unidimensional y muestre los elementos desde el último casillero al primero y además la suma de todos.']
            },
            {
                'id': 2,
                'titulo': 'Ejercicio 2',
                'description': ['Que ingrese N elementos a un arreglo unidimensional y que pida un número el cual multiplicará a cada elemento del arreglo y luego muestre los nuevos elementos.']
            },
            {
                'id': 3,
                'titulo': 'Ejercicio 3',
                'description': ['Que ingrese N elementos a un arreglo unidimensional y muestre solo los elementos de los casilleros impares. Además, que imprima la suma de los elementos de los casilleros impares.']
            },
            {
                'id': 4,
                'titulo': 'Ejercicio 4',
                'description': ['Que permita el ingreso de N elementos enteros a un arreglo y saque la raíz cuadrada solo de los elementos positivos.']
            },
            {
                'id': 5,
                'titulo': 'Ejercicio 5',
                'description': ['Que permita el ingreso de N elementos enteros a un arreglo y determine cuantos son pares y cuantos son impares.']
            },
            {
                'id': 6,
                'titulo': 'Ejercicio 6',
                'description': ['Modifique el programa del ejercicio 5 para que además muestre solo los pares y luego solo los impares.']
            },
            {
                'id': 7,
                'titulo': 'Ejercicio 7',
                'description': ['Siga modificando el programa anterior para que saque el promedio de los pares y el promedio de los impares.']
            },
            {
                'id': 8,
                'titulo': 'Ejercicio 8',
                'description': ['Programa para determinar la unión de dos arreglos en otro arreglo.']
            },
            {
                'id': 9,
                'titulo': 'Ejercicio 9',
                'description': ['Programa para determinar la intersección de dos arreglos en otro arreglo.']
            },
            {
                'id': 10,
                'titulo': 'Ejercicio 10',
                'description': ['Programa que determine cuáles y cuantos números primos hay en un arreglo de N enteros.']
            },
    ]
    return render_template('arreglos/a-arreglos.html', lista_1=lista_1)