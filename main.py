from app import create_app
from flask import redirect, url_for

app = create_app()

@app.errorhandler(404)
def index(error):
    return redirect(url_for('app_router.index'))