Algoritmo sin_titulo
	Definir num1, num2, num3 Como Entero
	
	Escribir "Por favor digita tres n�meros"
	Leer num1
	Leer num2
	Leer num3
	
	Si num1<=0 Entonces
		sum<-num1+num2+num3
		Escribir "Como el primer n�mero es menor o igual a cero, la sumatoria de los tres d�gitos es igual a ",sum,;
	SiNo
		prod<-num1*num2*num3
		Escribir "Como el primer n�mero es menor o igual a cero, el producto de los tres d�gitos es igual a ",prod,;
	Fin Si
FinAlgoritmo
