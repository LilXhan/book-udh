from flask import Flask
from .routes.rutes import app_router

def create_app():
    app = Flask(__name__)
#dasd
    app.register_blueprint(app_router)

    return app