SubProceso float<-programa1()
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
FinSubproceso
SubProceso char<-programa2()
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
			Escribir "" 
		FinSi
	FinPara
FinSubproceso 
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
Subproceso float<-programa3()
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
FinSubproceso 
SubProceso int<-programa4()
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
FinSubproceso
Subproceso char<-programa5()
	Dimension nombres[10]
	Definir i,aprobados Como Entero
	aprobados <- 0
	Dimension calif[10]
	Escribir 'BIENVENIDO AL SISTEMA DE LA UNIVERSIDAD'
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Escribir 'Por favor, ingresa el nombre del alumno ',i+1,':' Sin Saltar
		Leer nombres[i]
		Escribir 'Por favor, ingrese la calificación que obtuvo: ' Sin Saltar
		Repetir
			Leer calif[i]
			Si calif[i]<0 O calif[i]>10 Entonces
				Escribir 'Por favor ingrese una calificación valida: ' Sin Saltar
			FinSi
		Hasta Que calif[i]>=0 Y calif[i]<=10
	FinPara
	Escribir 'Los alumnos aprobados son:'
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si calif[i]>=6 Entonces
			Escribir nombres[i]
			aprobados <- aprobados+1
		FinSi
	FinPara
	Si aprobados==0 Entonces
		Escribir 'No hubo alumnos aprobados'
	FinSi
	Escribir 'La cantidad de reprobados es ',10-aprobados
	Si aprobados>8 Entonces
		Escribir 'La cantidad de aprobados es ',aprobados,' y por lo tanto la Universidad sera capaz de aumentar la colegiatura'
	SiNo
		Escribir 'La cantidad de aprobados es ',aprobados,' y por lo tanto la colegiatura de la Universidad no subirá'
	FinSi
Finsubproceso
Proceso ESwitch
	definir seleccion como caracter
	definir return Como Entero
	Escribir "ELIJA EL POROGRAMA QUE DESEA UTILIZAR"
	Escribir "a) Teclea a si desea multiplicar dos números y saber si el resultado es mayor a 150"
	Escribir "b) Teclea b si desea ingresar una cadena de diez carácteres para imprimirlos de forma inversa"
	Escribir "c) Teclea c si desea ingresar dos vectores de 10 elementos y obtener el resultado de su suma"
	Escribir "d) Teclea d si desea ingresar un arreglo de 3x3 y que se imprima su matriz y su matriz transpuesta"
	Escribir "e) Teclea e si desea acceder al sistema de la Universidad para conocer si la colegiatura aumentará o no"
	Leer seleccion
	Segun seleccion
		Caso 'a':
			Escribir "Usted ha elegido la opción a)"
			return<-programa1()
		Caso 'b':
			Escribir "Usted ha elegido la opción b)"
			return<-programa2()
		Caso 'c':
			Escribir "Usted ha elegido la opción c)"
			return<-programa3()
		Caso 'd':
			Escribir "Usted ha elegido la opción d)"
			return<-programa4()
		Caso 'e':
			Escribir "Usted ha elegido la opción e)"
			return<-programa5()
		De Otro Modo:
			Escribir "ERROR Opción inválida"
	FinSegun
FinProceso
