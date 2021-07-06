Algoritmo sin_titulo
	Definir alumnos, edad, suma, promedio, contador, may Como Real
	x=1
	suma=0
	
	Escribir "Ingresa el total de alumnos"
	Leer alumnos
	
	Para contador<-1 Hasta alumnos Con Paso paso Hacer
		Escribir "Ingresa tu edad"
		Leer edad
		suma=suma+edad
		x=x+1
		promedio=suma/alumnos
		Si edad>=18 Entonces
			may=may+1
		FinSi
	Fin Para
	
	Escribir "El promedio de edades de todo el grupo es: ",promedio;
	Escribir "Hay ",may," mayores de edad"
FinAlgoritmo
