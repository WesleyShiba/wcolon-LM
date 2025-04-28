from flask import Flask, render_template

app = Flask(__name__)

peliculas = [
    {"id": 1, "nombre": "Stars In Time", "precio": 13.79},
    {"id": 2, "nombre": "Zero Escape", "precio": 09.99}
]

usuarios = [
    {"id": 1, "nombre": "Wesley", "rol": "Usuario"},
    {"id": 2, "nombre": "Jesus", "rol": "Usuario"}
]

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/peliculas")
def mostrar_productos():
    return render_template("peliculas.html", peliculas=peliculas)

@app.route("/usuarios")
def mostrar_usuarios():
    return render_template("usuarios.html", usuarios=usuarios)

if __name__ == "__main__":
    app.run(debug=True)