Proceso Ejercicio1
	definir a,b como real 
	Escribir "INGRESA DOS N�MEROS Y LOS MULTIPLICAREMOS"
	hacer 
		Escribir "Ingresa el primer n�mero:" 
		leer a
		Escribir "Ingresa el segundo n�mero:" 
		leer b
		Escribir "El resultado de la multiplicaci�n es: " a*b
		si a*b <150 entonces 
			escribir "Para salir del programa, el resultado de la multiplicaci�n debe ser mayor o igual a 150"
		FinSi
		hasta que a*b>=150
FinProceso
