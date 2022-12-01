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
    return render_template('algoritmos/a-condicionales.html')


@app_router.route('/bucles-mq')
def bucle_mq():
    return render_template('bucles/a-buclemq.html')


@app_router.route('/bucle-for')
def bucle_for():
    return render_template('bucles/a-buclefor.html')

@app_router.route('/arreglos')
def arrays():
    return render_template('arreglos/a-arreglos.html')