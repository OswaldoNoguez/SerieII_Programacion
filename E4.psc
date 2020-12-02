Proceso E4
	definir i, j Como Entero
	Dimension arreglo(3,3)
	Escribir "Ingrese los datos de la matriz de 3x3"
	para i=0 hasta 2 con paso 1
		para j=0 hasta 2 con paso 1
			Escribir "Ingrese el dato correspodiente a la posición " "[" i+1 "," j+1 "]" SinSaltar
			Leer arreglo[i,j]
		FinPara
	FinPara
	Escribir "Los elementos almacenados en la matriz de 3x3 son:"	
	para i=0 hasta 2 con paso 1
		para j=0 hasta 2 con paso 1
			Escribir arreglo[i,j] " " SinSaltar 
		FinPara
	Escribir ""
	FinPara
	Escribir "La matriz transpuesta de 3x3 es:"
	para i=0 hasta 2 con paso 1
		para j=0 hasta 2 con paso 1
			Escribir arreglo[j,i] " " SinSaltar 
		FinPara
		Escribir ""
	FinPara
FinProceso
