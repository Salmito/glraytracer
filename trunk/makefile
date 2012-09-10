######################################################
# makefile for GL Raytracer
######################################################

UNAME := $(shell uname)

# Linux
ifeq ($(UNAME), Linux)
	INCLUDE_DIR = -I/usr/local/X11/include
	LIBRARY_DIR = -L./. -L/usr/local/X11/lib -L/usr/X11/lib -L/usr/X11R6/lib -L/usr/lib
	LIBRARIES = -lglut -lm -lGLU -lGL -lXext -lXt -lX11
endif
# End - Linux

# Mac OSX
ifeq ($(UNAME), Darwin)
	INCLUDE_DIR = -I/System/Library/Frameworks/GLUT.framework/Headers
	LIBRARIES = -framework GLUT -framework OpenGL -lobjc
endif
# End - Mac OSX


COMPILER_FLAGS = -O -g

COMPILER = g++

OBJ_FILES	= main.o glraytracer.o dbReader.o
EXEC		= glraytracer

$(EXEC):	$(OBJ_FILES)
		$(COMPILER) $(COMPILER_FLAGS) -o $(EXEC) $(OBJ_FILES) \
			$(LIBRARY_DIR) $(LIBRARIES)

main.o: main.cpp
	$(COMPILER) $(COMPILER_FLAGS) $(INCLUDE_DIR) -c main.cpp
glraytracer.o: glraytracer.cpp
	$(COMPILER) $(COMPILER_FLAGS) $(INCLUDE_DIR) -c glraytracer.cpp
dbReader.o: dbReader.cpp
	$(COMPILER) $(COMPILER_FLAGS) $(INCLUDE_DIR) -c dbReader.cpp

clean:
	\rm -f $(OBJ_FILES) $(EXEC)
