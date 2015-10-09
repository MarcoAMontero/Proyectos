#Esto es un comenta rio
#Se definen los objetos,estos son los archivos que necesitan
#para crearel
OBJS = PresentaciónFinal.tex
#Se define el compilador
CC = pdflatex
#Archivo Ejecutable que se va a crear
TARGET = Propuesta.pdf
#Reglas a ejecutar cuando se ejecute make
all:     
	$(CC) $(OBJS)

#Al digitar make clean se borraran todos los archivos compilados ,
# note e l -f en rm , si no sabe para que sirve use e l manual de rm .

clean:
	rm -f *.log *.aux *.bbl *.gz *~ *.blg *.out *.nav *.snm *.toc

