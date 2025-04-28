from flask import Flask, render_template, request, redirect, url_for
from flask_wtf import FlaskForm
from wtforms import StringField, PasswordField, SubmitField, EmailField
from wtforms.validators import DataRequired, length

app = Flask(__name__)
app.config['SECRET_KEY'] = "mi_clave_secreta"

class LoginForm(FlaskForm):
    username = StringField("Username",  # definir input boxes 
                           validators=[DataRequired(), length(min=3)],
                           render_kw={"placeholder": "Your email"})
    password = PasswordField("Password",   
                           validators=[DataRequired()],
                           render_kw={"placeholder": "Your password"})
    submit = SubmitField("Login",  
                           render_kw={"class": "btn btn-primary"})  
    email = EmailField("Email",  
                         validators=[DataRequired()],
                         render_kw={"placeholder": "Your email ejemplo@gmail.com"})

@app.route("/", methods=["GET", "POST"])
def index():
    form = LoginForm()  # Define las reglas de validación
    if form.validate_on_submit():  
        
        return redirect(url_for('login'))
    return render_template("index.html.jinja2", form=form)  

@app.route("/login", methods=["GET", "POST"])
def login():
    form = LoginForm()  # Las reglas se definen de validación
    if form.validate_on_submit():  
        message = f"Usuario: {form.username.data}"
        return render_template("home.html", message=message)
    
    return render_template("index.html.jinja2", form=form)

if __name__ == "__main__":
    app.run(debug=True)