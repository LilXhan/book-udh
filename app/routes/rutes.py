from flask import Blueprint, render_template

app_router = Blueprint('app_router', __name__)

@app_router.route('/')
def index():
    return render_template('index/index.html')


@app_router.route('/algoritmos-simples')
def algoritm_simples():
    return render_template('algoritmos/a-simples.html')


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