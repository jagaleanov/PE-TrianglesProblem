

Proceso triangulos
	
	Definir a,b,base,h como REAL;
	Escribir "Ingrese el valor de las varillas A, B y la BASE";
	Leer a
	Leer b
	Leer base
	
	Si base>=a || base>=b Entonces
		Escribir "El valor de la BASE debe ser menor a A y B";
	SiNo
		Escribir "El valor de A es ",a;
		Escribir "El valor de B es ",b;
		Escribir "El valor de la BASE es ",base;
		Escribir "El valor de a altura de la interseccion h es ",get_h(a,b,base);
	Fin Si
	
	
FinProceso

SubProceso h <- get_h(a,b,base)
	h <- ((base * SEN(ACOS(base/a)))*SEN(ACOS(base/b)))/(SEN(pi-ACOS(base/b)-ACOS(base/a)))
FinSubProceso