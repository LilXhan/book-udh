from app import create_app
from flask import redirect, url_for

main = create_app()

@main.errorhandler(404)
def index(error):
    return redirect(url_for('app_router.index'))



if __name__ == "__main__":
    main.run()