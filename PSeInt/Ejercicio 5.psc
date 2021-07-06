Algoritmo sin_titulo
	Definir nota Como Real
	
	Escribir "Ingrese su nota"
	Leer nota
	
	Si nota>=0.0 y nota<3.0 Entonces
		Escribir "Deficiente"
	SiNo
		Si nota>=3.0 y nota<4.0 Entonces
			Escribir "Aceptable"
		SiNo
			Si nota>=4.0 y nota<4.5 Entonces
				Escribir "Sobresaliente"
			SiNo
				Si nota>=4.5 y nota<5.0 Entonces
					Escribir "Excelente"
				SiNo
					Escribir "Dato erroneo"
				FinSi
			FinSi
		FinSi
	Fin Si
	
FinAlgoritmo
