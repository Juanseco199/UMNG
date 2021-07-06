//Dos vehículos viajan a diferentes velocidades (v1 y v2) y están distanciados por una distancia d. 
//El que está detrás viaja a una velocidad mayor. 
//Se pide hacer un algoritmo para ingresar la distancia entre los dos vehículos (km) y sus respectivas velocidades (km/h) y con esto determinar y mostrar en que 
//tiempo (minutos) alcanzará el vehículo más rápido al otro.
//v1 = 32.1, v2= 23.6 y d= 12

Algoritmo sin_titulo
	Escribir "Este programa calcula el tiempo que tardan en encontrarse dos vehículos que circulan a distinta velocidad y parten desde una distancia inicial";
    Escribir "Introduce la distancia a la que se encuentran situados ambos vehículos:" 
	Leer distancia;
    Escribir "Velocidad en Km/h del vehículo 1 (más rápido):" 
	Leer v1;
    Escribir "Velocidad en Km/h del vehículo 2 (más lento):" 
	Leer v2;
    
    diferenciaVelocidad = v1 - v2;
    tiempo = distancia / (diferenciaVelocidad);
    tiempo = tiempo * 60;
    
    Escribir "Ambos vehículos coincidirán una vez transcurridos ",tiempo," minutos.";
FinAlgoritmo
