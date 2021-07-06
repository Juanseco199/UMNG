Algoritmo sin_titulo
	Definir num1, num2, num3 Como Entero
	
	Escribir "Por favor digita tres números"
	Leer num1
	Leer num2
	Leer num3
	
	Si num1<=0 Entonces
		sum<-num1+num2+num3
		Escribir "Como el primer número es menor o igual a cero, la sumatoria de los tres dígitos es igual a ",sum,;
	SiNo
		prod<-num1*num2*num3
		Escribir "Como el primer número es menor o igual a cero, el producto de los tres dígitos es igual a ",prod,;
	Fin Si
FinAlgoritmo
