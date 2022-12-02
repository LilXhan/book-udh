from flask import Blueprint, render_template


c_router = Blueprint('c_router', __name__)


@c_router.route('/simples-c++')
def c_simples():
    lista_1 = [
        {
            'id': 1,
            'titulo': 'Ejercicio 1',
            'description': ['Algoritmo que permita el ingreso de dos números enteros y calcule la división de ambos números.'],
            'link_replit': 'https://replit.com/@bryletucto/1?embed=true'
        },
        {
            'id': 2,
            'titulo': 'Ejercicio 2',
            'description': ['Algoritmo que convierta soles a dólares.'],
            'link_replit': 'https://replit.com/@bryletucto/2?embed=true'
        },
        {
            'id': 3,
            'titulo': 'Ejercicio 3',
            'description': ['Algoritmo que convierta kilómetros en metros y en centímetros.'],
            'link_replit': 'https://replit.com/@bryletucto/3?embed=true'
        },
        {
            'id': 4,
            'titulo': 'Ejercicio 4',
            'description': ['Algoritmo que convierta horas en minutos y en segundos.'],
            'link_replit': 'https://replit.com/@bryletucto/4?embed=true'
        },
        {
            'id': 5,
            'titulo': 'Ejercicio 5',
            'description': ['Algoritmo que convierta grados Celsius a grados Fahrenheit.'],
            'link_replit': 'https://replit.com/@bryletucto/5?embed=true'
        },
        {
            'id': 6,
            'titulo': 'Ejercicio 6',
            'description': ['Algoritmo que eleve al cubo un número entero.'],
            'link_replit': 'https://replit.com/@bryletucto/6?embed=true'
        },
        {
            'id': 7,
            'titulo': 'Ejercicio 7',
            'description': ['Algoritmo que calcule la distancia (MRU) sabiendo la velocidad y el tiempo recorrido por un móvil.'],
            'link_replit': 'https://replit.com/@bryletucto/7?embed=true'
        },
        {
            'id': 8,
            'titulo': 'Ejercicio 8',
            'description': ['Algoritmo que calcule el salario mensual, sabiendo el número de horas trabajadas y el valor por hora.'],
            'link_replit': 'https://replit.com/@bryletucto/8?embed=true'
        },
        {
            'id': 9,
            'titulo': 'Ejercicio 9',
            'description': ['Un docente desea saber el porcentaje de varones y mujeres que hay en un salón de clases; realice el algoritmo respectivo.'],
            'link_replit': 'https://replit.com/@bryletucto/9?embed=true'
        },
        {
            'id': 10,
            'titulo': 'Ejercicio 10',
            'description': ['Un alumno desea saber el promedio de sus calificaciones teniendo en cuenta que:', '- El promedio de sus 4 tareas académicas es el 60% del promedio final.', '- El examen de medio curso es el 15% del promedio final.', '- El examen final es el 25% del promedio final.'],
            'link_replit': 'https://replit.com/@bryletucto/10?embed=true'
        },
        {
            'id': 11,
            'titulo': 'Ejercicio 11',
            'description': ['Algoritmo que calcule el nuevo salario de un obrero, si obtuvo un incremento del 25% sobre su salario anterior.'],
            'link_replit': 'https://replit.com/@bryletucto/11?embed=true'
        },
    ]

    return render_template('algoritmos/c-simples.html', lista_2=lista_1)


@c_router.route('/condicionales-c++')
def c_condicional():
    return render_template('algoritmos/c-condicionales.html')


@c_router.route('/bucles-mq-c++')
def c_bucle_mq():
    return render_template('bucles/c-buclemq.html')


@c_router.route('/bucles-for-c++')
def c_bucle_for():
    return render_template('bucles/c-buclefor.html')


@c_router.route('/arreglos-c++')
def c_arreglos():
    return render_template('arreglos/c-arreglos.html')

