from flask import Blueprint, render_template


c_router = Blueprint('c_router', __name__)


@c_router.route('/simples-c++')
def c_simples():
    return render_template('algoritmos/c-simples.html')


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

