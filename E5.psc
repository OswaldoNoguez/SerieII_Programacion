Proceso E5
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
FinProceso

