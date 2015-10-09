#Esto es un comenta rio
#Se definen los objetos,estos son los archivos que necesitan
#para crearel
OBJS = Informe.tex
OBJS2 =  Informe.aux
#Se define el compilador
CC = pdflatex
CC2 = bibtex
#Archivo Ejecutable que se va a crear
TARGET = Informe.pdf
#Reglas a ejecutar cuando se ejecute make
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS)
	$(CC2) $(OBJS2)
	$(CC) $(OBJS)
	$(CC) $(OBJS)
#Al digitar make clean se borraran todos los archivos compilados ,
# note e l -f en rm , si no sabe para que sirve use e l manual de rm .

clean:
	rm -f *.log *.aux *.out *.gz *~ *.pdf *.bbl *.blg

