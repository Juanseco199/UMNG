//Dos veh�culos viajan a diferentes velocidades (v1 y v2) y est�n distanciados por una distancia d. 
//El que est� detr�s viaja a una velocidad mayor. 
//Se pide hacer un algoritmo para ingresar la distancia entre los dos veh�culos (km) y sus respectivas velocidades (km/h) y con esto determinar y mostrar en que 
//tiempo (minutos) alcanzar� el veh�culo m�s r�pido al otro.
//v1 = 32.1, v2= 23.6 y d= 12

Algoritmo sin_titulo
	Escribir "Este programa calcula el tiempo que tardan en encontrarse dos veh�culos que circulan a distinta velocidad y parten desde una distancia inicial";
    Escribir "Introduce la distancia a la que se encuentran situados ambos veh�culos:" 
	Leer distancia;
    Escribir "Velocidad en Km/h del veh�culo 1 (m�s r�pido):" 
	Leer v1;
    Escribir "Velocidad en Km/h del veh�culo 2 (m�s lento):" 
	Leer v2;
    
    diferenciaVelocidad = v1 - v2;
    tiempo = distancia / (diferenciaVelocidad);
    tiempo = tiempo * 60;
    
    Escribir "Ambos veh�culos coincidir�n una vez transcurridos ",tiempo," minutos.";
FinAlgoritmo
