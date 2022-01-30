#include <gl/glut.h>
using namespace std;

void init(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 200.00, 0.0, 150.0);
}

void dibujarTriangulo(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.5, 0.0);

	glBegin(GL_TRIANGLES);
	glVertex2i(20, 10);
	glVertex2i(120, 10);
	glVertex2i(70, 145);
	glEnd();

	glFlush();//Procesa las rutinas tan rapido como sea posible.
}

int main(int argc, char** argv) {

	//Inicializando glut
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(400, 300);

	//Creacion de una ventana con glut
	glutCreateWindow("Ejercicio 01 Glut & OpenGL");
	init(); //Ejecuta el procedimiento de inicializacion

	glutDisplayFunc(dibujarTriangulo); //Pasamos como argumento la imagen grafica a mostrar
	glutMainLoop();//Hacer que la ventana permanezca en pantalla

	return 0;
}