from flask import Flask
from .routes.rutes import app_router
from .routes.rutes_c import c_router

def create_app():
    app = Flask(__name__)

    app.register_blueprint(c_router)
    app.register_blueprint(app_router)

    return app