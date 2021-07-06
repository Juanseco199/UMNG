Algoritmo triangulos_segun_sus_lados
	Definir a,b,c Como Real
	
	Escribir "Por favor ingrese tres números correspondientes a los lados de un triángulo"
	Escribir "Ingrese el lado 1"
	Leer a
	Escribir "Ingrese el lado 2"
	Leer b
	Escribir "Ingrese el lado 3"
	Leer c
	
	Si a<b+c y b<a+c y c<a+b Entonces
		Si a=b y a=c Entonces
			Escribir "Según los datos ingresados, su triángulo es equilátero"
		SiNo
			Si a=b o a=c o b=c Entonces
				Escribir "Según los datos ingresados, su triángulo es isósceles"
			SiNo
				Si a<>b y a<>c y b<>c Entonces
					Escribir "Según los datos ingresados, su triángulo es escaleno"
				Fin Si
			Fin Si
		Fin Si
	SiNo
		Escribir "Error"
	Fin Si
FinAlgoritmo
