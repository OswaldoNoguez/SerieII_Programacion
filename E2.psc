Proceso Ejercicio2
	escribir "Ingresa una cadena de 10 carácteres"
	definir i Como Entero
	Dimension arreglo(10)
	para i=0 hasta 9 con paso 1
		leer arreglo(i) 
	FinPara
	Escribir "La cadena ingresada escrita de forma inversa es:"
	para i=9 hasta 0 con paso -1
		escribir arreglo(i) SinSaltar
		si i== 0
			Escribir "" //Para que haga un salto de linea
		FinSi
	FinPara
FinProceso
