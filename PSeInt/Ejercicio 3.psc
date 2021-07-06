Algoritmo sin_titulo
	Definir num Como Entero
	
	Escribir "Por favor ingrese un número entero de tres dígitos "
	Leer num
	
	dig1<-num MOD 10
	tem1<-TRUNC (num/10)
	dig2<-tem1 MOD 10
	tem2<-TRUNC (num/100)
	dig3<-tem2 MOD 10
	tem3<-TRUNC (num/1000)
	
	sum<-dig1+dig2+dig3
	
		Si sum MOD 2 = 0 Entonces
			Escribir "La suma ",dig3,"+",dig2,"+",dig1,"=",sum," es par"
		SiNo
			Escribir "La suma ",dig3,"+",dig2,"+",dig1,"=",sum," es impar"
		Fin Si
	
	Escribir ""
FinAlgoritmo
