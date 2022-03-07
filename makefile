all: compilar
compilar:  propietario mascota propietarioXmascota sistema main
	g++ -o Executable Propietario.o Mascota.o PropietarioxMascota.o Sistema.o Main.o
propietario: Propietario.cpp Propietario.h Mascota.h
	g++ -c Propietario.cpp
mascota: Mascota.cpp Mascota.h Propietario.h
	g++ -c Mascota.cpp
propietarioXmascota: PropietarioxMascota.cpp PropietarioxMascota.h Mascota.h Propietario.h
	g++ -c PropietarioxMascota.cpp
sistema: Sistema.cpp Sistema.h Mascota.h Propietario.h
	g++ -c Sistema.cpp
main: Main.cpp Sistema.h
	g++ -c Main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o