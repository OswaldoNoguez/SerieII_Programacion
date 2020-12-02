SubProceso float<-leerVector(vectorX)
	definir i Como Entero
	para i<-0 hasta 9 con paso 1
		Escribir "Ingresa el valor: " i+1 SinSaltar
		Leer vectorX(i)
	FinPara
FinSubProceso
SubProceso float<-imprimirVector(vectorX)
	definir i, return como entero
	para i<-0 hasta 9 con paso 1
		si (i==9) entonces
			escribir vectorX[i] "}"
		SiNo
			escribir vectorX[i] ", " SinSaltar
		FinSi
	FinPara
FinSubProceso
Proceso Ejercicio2
	definir i Como Entero
	definir acum como real
	dimension vectorA[10], vectorB[10], vectorC[10] 
	acum<-0
		Escribir "Ingrese los valores para el vector A"
		return<-leerVector(vectorA)
		Escribir "Ingrese los valores para el vector B"
		return<-leerVector(vectorB)
		para i<-0 hasta 9 con paso 1
			vectorC[i]=vectorA[i]+vectorB[i]
		FinPara
		Para i<-0 hasta 9 con paso 1
			acum=acum+vectorC[i];
		FinPara
		Escribir "Los elementos contenidos en el vector A son {" SinSaltar
		return<-imprimirVector(vectorA);
		Escribir "Los elementos contenidos en el vector B son {" SinSaltar
		return<-imprimirVector(vectorB);
		Escribir "Los elementos contenidos en el vector C son {" SinSaltar
		return<-imprimirVector(vectorC);
		Escribir "La suma de los elementos contenidos en el vector A y el vector B es: " acum
FinProceso 