Algoritmo triangulos_segun_sus_lados
	Definir a,b,c Como Real
	
	Escribir "Por favor ingrese tres n�meros correspondientes a los lados de un tri�ngulo"
	Escribir "Ingrese el lado 1"
	Leer a
	Escribir "Ingrese el lado 2"
	Leer b
	Escribir "Ingrese el lado 3"
	Leer c
	
	Si a<b+c y b<a+c y c<a+b Entonces
		Si a=b y a=c Entonces
			Escribir "Seg�n los datos ingresados, su tri�ngulo es equil�tero"
		SiNo
			Si a=b o a=c o b=c Entonces
				Escribir "Seg�n los datos ingresados, su tri�ngulo es is�sceles"
			SiNo
				Si a<>b y a<>c y b<>c Entonces
					Escribir "Seg�n los datos ingresados, su tri�ngulo es escaleno"
				Fin Si
			Fin Si
		Fin Si
	SiNo
		Escribir "Error"
	Fin Si
FinAlgoritmo
