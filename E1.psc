Proceso Ejercicio1
	definir a,b como real 
	Escribir "INGRESA DOS NÚMEROS Y LOS MULTIPLICAREMOS"
	hacer 
		Escribir "Ingresa el primer número:" 
		leer a
		Escribir "Ingresa el segundo número:" 
		leer b
		Escribir "El resultado de la multiplicación es: " a*b
		si a*b <150 entonces 
			escribir "Para salir del programa, el resultado de la multiplicación debe ser mayor o igual a 150"
		FinSi
		hasta que a*b>=150
FinProceso
