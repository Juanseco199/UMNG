Algoritmo sin_titulo
	Escribir "Ingresa un número por favor"
	Leer x
	
	Si x<5 Entonces
		resultado<-(x^2)+(5*x)-10
		Escribir "El resultado es: ",resultado,;
	SiNo
		resultado<-((x^2)+(5*x)-10)^(1/3)
		Escribir "El resultado es: ",resultado,;
	Fin Si
FinAlgoritmo
