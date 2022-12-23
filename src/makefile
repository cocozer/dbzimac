# makefile de base correspondant a l'exercice 2, TP8

main.exe: main.o SDL2_gfxPrimitives.o application_ui.o
		g++ -o main.exe main.o SDL2_gfxPrimitives.o application_ui.o 

main.o: main.cpp application_ui.h SDL2_gfxPrimitives.h
	g++ -o main.o -c main.cpp -Wall

application_ui.o: application_ui.cpp application_ui.h
	     g++ -o application_ui.o -c application_ui.cpp -Wall

SDL2_gfxPrimitives.o: SDL2_gfxPrimitives.c SDL2_gfxPrimitives.h
		 g++ -o SDL2_gfxPrimitives.o -c SDL2_gfxPrimitives.c -Wall

clean:
	rm *.o

# On veut produire un programme executable "mon_executable".
# Pour ça, il faut s'assurer que les fichiers objet code.o et fonctions.o
# existent et sont a jour.

# code.o ne depend que de code.c et fonctions.h, tous les deux
# etant fichiers source, on ne va plus les modifier.
# Si code.o existe deja et a été modifié plus tard que code.c et
# fonctions.h, alors c'est déjà à jour et on ne va rien faire.
# Sinon, on actualise en appelant g++ -o fonctions.o ...

# On vérifie egalement pour fonctions.o

# Finalement, on est sur d'avoir code.o et fonctions.o a jour et on peut
# alors verifier que mon_executable est à jour. Sinon, on appelle g++...
