#include <windows.h>
#include<cstdio>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>>
# define PI           3.14159265358979323846

#include <stdlib.h>

int rainy=0;
int view=0;
GLfloat position = 0.0f;
GLfloat speed = 0.3f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.03f;


GLfloat position2 = 0.0f;
GLfloat speed2 = 0.005f;

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.05f;

GLfloat positionsun = 0.0f;
GLfloat speedsun = 0.003f;





void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value1) {
    if(position1 <-1.0)
        position1 = 1.0f;
    position1 -= speed1;
	glutPostRedisplay();
	glutTimerFunc(100, update1, 0);
}

void update2(int value2) {
    if(position2 <-1.0)
        position2 = 1.0f;
    position2 -= speed2;
	glutPostRedisplay();
	glutTimerFunc(100, update2, 0);
}

void update3(int value3) {
    if(position3 <-1.0)
        position3 = 1.0f;
    position3 -= speed3;
	glutPostRedisplay();
	glutTimerFunc(100, update3, 0);
}


void update4(int value4) {
    if(positionsun <-1.0)
        positionsun = 1.0f;
    positionsun -= speedsun;
	glutPostRedisplay();
	glutTimerFunc(100, update4, 0);
}





  void Roads(){
        //*********start roads for travel***********
        glColor3ub(78,78,78);
        glBegin(GL_QUADS);
        glVertex2f(-1,-1);
        glVertex2f(1,-1);
        glVertex2f(1,-0.6);
        glVertex2f(-1,-0.6);
        glEnd();
         //*********start roads for travel***********

         //road border
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-1,-0.63);
        glVertex2f(1,-0.63);
        glVertex2f(1,0.6);
        glVertex2f(-1,0.6);
        glEnd();

        //  ***********road tiles start************
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();

        glTranslatef(+0.2f, 0.0f, 0.0f);
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();

        glTranslatef(+0.2f, 0.0f, 0.0f);
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();

        glTranslatef(+0.2f, 0.0f, 0.0f);
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();

        glTranslatef(+0.2f, 0.0f, 0.0f);
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();

        glTranslatef(+0.2f, 0.0f, 0.0f);
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();

        glTranslatef(+0.2f, 0.0f, 0.0f);
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();

        glTranslatef(+0.2f, 0.0f, 0.0f);
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();

        glTranslatef(+0.2f, 0.0f, 0.0f);
        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.80);
        glVertex2f(-0.80,-0.80);
        glVertex2f(-0.80,-0.78);
        glVertex2f(-0.85,-0.78);
        glEnd();
        glLoadIdentity();

       // ***********road tiles end************


  }


  void Playground(){



        //field grass
        glColor3ub(126,200,80);
        glBegin(GL_QUADS);
        glVertex2f(-1,-0.6);
        glVertex2f(1,-0.6);
        glVertex2f(1,-0.1);
        glVertex2f(-1,-0.1);
        glEnd();
/*
         GLfloat global_ambient[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

       glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();

         glTranslatef(+0.15f, 0.0f, 0.0f);
        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);//Enable Light Effect
        glLoadIdentity();

//  light 1 end
        glTranslatef(+0.4f, 0.0f, 0.0f);
 GLfloat global_ambient1[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

  glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




        glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();


	 //light 2 end

	glTranslatef(+0.8f, 0.0f, 0.0f);


 GLfloat global_ambient2[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
 // light 3 end

     glTranslatef(+1.2f, 0.0f, 0.0f);


 GLfloat global_ambient4[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
        // light 4 end



       glTranslatef(+1.6f, 0.0f, 0.0f);


 GLfloat global_ambient3[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
  //light 5 end
  */

        //**********start of play region**************
        glColor3ub(255,255,255);
        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.55);
        glVertex2f(0.95,-0.55);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.55);
        glVertex2f(0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.55);
        glVertex2f(-0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.15);
        glVertex2f(0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.45);
        glVertex2f(-0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.25);
        glVertex2f(-0.80,-0.25);
        glEnd();

         glBegin(GL_LINES);
        glVertex2f(-0.80,-0.25);
        glVertex2f(-0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.45);
        glVertex2f(0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.25);
        glVertex2f(0.80,-0.25);
        glEnd();

         glBegin(GL_LINES);
        glVertex2f(0.80,-0.25);
        glVertex2f(0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.00,-0.15);
        glVertex2f(0.00,-0.55);
        glEnd();


        GLfloat x=.0f; GLfloat y=-0.35f; GLfloat radius =0.05f;
      int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glColor3ub(255,255,255);

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

     //**********end of play region**************



  }


  void PlaygroundEvening(){



        //field grass
        glColor3ub(57, 230, 0);
        glBegin(GL_QUADS);
        glVertex2f(-1,-0.6);
        glVertex2f(1,-0.6);
        glVertex2f(1,-0.1);
        glVertex2f(-1,-0.1);
        glEnd();

         GLfloat global_ambient[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

       glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();

         glTranslatef(+0.15f, 0.0f, 0.0f);
        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);//Enable Light Effect
        glLoadIdentity();

//  light 1 end
        glTranslatef(+0.4f, 0.0f, 0.0f);
 GLfloat global_ambient1[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

  glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




        glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();


	 //light 2 end

	glTranslatef(+0.8f, 0.0f, 0.0f);


 GLfloat global_ambient2[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
 // light 3 end

     glTranslatef(+1.2f, 0.0f, 0.0f);


 GLfloat global_ambient4[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
        // light 4 end



       glTranslatef(+1.6f, 0.0f, 0.0f);


 GLfloat global_ambient3[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
  //light 5 end


        //**********start of play region**************
        glColor3ub(255,255,255);
        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.55);
        glVertex2f(0.95,-0.55);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.55);
        glVertex2f(0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.55);
        glVertex2f(-0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.15);
        glVertex2f(0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.45);
        glVertex2f(-0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.25);
        glVertex2f(-0.80,-0.25);
        glEnd();

         glBegin(GL_LINES);
        glVertex2f(-0.80,-0.25);
        glVertex2f(-0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.45);
        glVertex2f(0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.25);
        glVertex2f(0.80,-0.25);
        glEnd();

         glBegin(GL_LINES);
        glVertex2f(0.80,-0.25);
        glVertex2f(0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.00,-0.15);
        glVertex2f(0.00,-0.55);
        glEnd();


        GLfloat x=.0f; GLfloat y=-0.35f; GLfloat radius =0.05f;
      int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glColor3ub(255,255,255);

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

     //**********end of play region**************



  }


    void PlaygroundMorning(){



        //field grass
        glColor3ub(136, 204, 0);
        glBegin(GL_QUADS);
        glVertex2f(-1,-0.6);
        glVertex2f(1,-0.6);
        glVertex2f(1,-0.1);
        glVertex2f(-1,-0.1);
        glEnd();


        //**********start of play region**************
        glColor3ub(255,255,255);
        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.55);
        glVertex2f(0.95,-0.55);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.55);
        glVertex2f(0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.55);
        glVertex2f(-0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.15);
        glVertex2f(0.95,-0.15);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.45);
        glVertex2f(-0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(-0.95,-0.25);
        glVertex2f(-0.80,-0.25);
        glEnd();

         glBegin(GL_LINES);
        glVertex2f(-0.80,-0.25);
        glVertex2f(-0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.45);
        glVertex2f(0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.95,-0.25);
        glVertex2f(0.80,-0.25);
        glEnd();

         glBegin(GL_LINES);
        glVertex2f(0.80,-0.25);
        glVertex2f(0.80,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glVertex2f(0.00,-0.15);
        glVertex2f(0.00,-0.55);
        glEnd();


        GLfloat x=.0f; GLfloat y=-0.35f; GLfloat radius =0.05f;
      int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glColor3ub(255,255,255);

	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

     //**********end of play region**************



  }


  void Trees(){
      // *** soil ground start****
      glColor3ub(155,118,83);//soil
      glBegin(GL_QUADS);
      glVertex2f(-1,-0.1);
      glVertex2f(1,-0.1);
      glVertex2f(1,-0.08);
      glVertex2f(-1,-0.08);
      glEnd();
      // *** soil ground end****

      //**** Start of Trees
      glColor3ub(138,115,98); //tree branch
      glBegin(GL_QUADS);
      glVertex2f(-0.9,-0.08);
      glVertex2f(-0.88,-0.08);
      glVertex2f(-0.88,-0.00);
      glVertex2f(-0.9,-0.00);
      glEnd();


      glColor3ub(97,138,61);// first leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.92,0.00);
      glVertex2f(-0.86,0.00);
      glVertex2f(-0.89,0.05);
      glEnd();

      glColor3ub(97,138,61);// second leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.94,0.03);
      glVertex2f(-0.84,0.03);
      glVertex2f(-0.89,0.1);
      glEnd();

      glTranslatef(+0.2f, 0.0f, 0.0f);
      glColor3ub(138,115,98); //tree branch
      glBegin(GL_QUADS);
      glVertex2f(-0.9,-0.08);
      glVertex2f(-0.88,-0.08);
      glVertex2f(-0.88,-0.00);
      glVertex2f(-0.9,-0.00);
      glEnd();


      glColor3ub(97,138,61);// first leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.92,0.00);
      glVertex2f(-0.86,0.00);
      glVertex2f(-0.89,0.05);
      glEnd();

      glColor3ub(97,138,61);// second leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.94,0.03);
      glVertex2f(-0.84,0.03);
      glVertex2f(-0.89,0.1);
      glEnd();


      glTranslatef(+0.2f, 0.0f, 0.0f);
      glColor3ub(138,115,98); //tree branch
      glBegin(GL_QUADS);
      glVertex2f(-0.9,-0.08);
      glVertex2f(-0.88,-0.08);
      glVertex2f(-0.88,-0.00);
      glVertex2f(-0.9,-0.00);
      glEnd();


      glColor3ub(97,138,61);// first leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.92,0.00);
      glVertex2f(-0.86,0.00);
      glVertex2f(-0.89,0.05);
      glEnd();

      glColor3ub(97,138,61);// second leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.94,0.03);
      glVertex2f(-0.84,0.03);
      glVertex2f(-0.89,0.1);
      glEnd();

      glTranslatef(+0.17f, 0.0f, 0.0f);
      glColor3ub(138,115,98); //tree branch
      glBegin(GL_QUADS);
      glVertex2f(-0.9,-0.08);
      glVertex2f(-0.88,-0.08);
      glVertex2f(-0.88,-0.00);
      glVertex2f(-0.9,-0.00);
      glEnd();


      glColor3ub(97,138,61);// first leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.92,0.00);
      glVertex2f(-0.86,0.00);
      glVertex2f(-0.89,0.05);
      glEnd();

      glColor3ub(97,138,61);// second leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.94,0.03);
      glVertex2f(-0.84,0.03);
      glVertex2f(-0.89,0.1);
      glEnd();


      glTranslatef(+0.63f, 0.0f, 0.0f);
      glColor3ub(138,115,98); //tree branch
      glBegin(GL_QUADS);
      glVertex2f(-0.9,-0.08);
      glVertex2f(-0.88,-0.08);
      glVertex2f(-0.88,-0.00);
      glVertex2f(-0.9,-0.00);
      glEnd();


      glColor3ub(97,138,61);// first leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.92,0.00);
      glVertex2f(-0.86,0.00);
      glVertex2f(-0.89,0.05);
      glEnd();

      glColor3ub(97,138,61);// second leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.94,0.03);
      glVertex2f(-0.84,0.03);
      glVertex2f(-0.89,0.1);
      glEnd();

      glTranslatef(+0.23f, 0.0f, 0.0f);
      glColor3ub(138,115,98); //tree branch
      glBegin(GL_QUADS);
      glVertex2f(-0.9,-0.08);
      glVertex2f(-0.88,-0.08);
      glVertex2f(-0.88,-0.00);
      glVertex2f(-0.9,-0.00);
      glEnd();


      glColor3ub(97,138,61);// first leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.92,0.00);
      glVertex2f(-0.86,0.00);
      glVertex2f(-0.89,0.05);
      glEnd();

      glColor3ub(97,138,61);// second leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.94,0.03);
      glVertex2f(-0.84,0.03);
      glVertex2f(-0.89,0.1);
      glEnd();


      glTranslatef(+0.23f, 0.0f, 0.0f);
      glColor3ub(138,115,98); //tree branch
      glBegin(GL_QUADS);
      glVertex2f(-0.9,-0.08);
      glVertex2f(-0.88,-0.08);
      glVertex2f(-0.88,-0.00);
      glVertex2f(-0.9,-0.00);
      glEnd();


      glColor3ub(97,138,61);// first leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.92,0.00);
      glVertex2f(-0.86,0.00);
      glVertex2f(-0.89,0.05);
      glEnd();

      glColor3ub(97,138,61);// second leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.94,0.03);
      glVertex2f(-0.84,0.03);
      glVertex2f(-0.89,0.1);
      glEnd();

      glTranslatef(+0.18f, 0.0f, 0.0f);
      glColor3ub(138,115,98); //tree branch
      glBegin(GL_QUADS);
      glVertex2f(-0.9,-0.08);
      glVertex2f(-0.88,-0.08);
      glVertex2f(-0.88,-0.00);
      glVertex2f(-0.9,-0.00);
      glEnd();


      glColor3ub(97,138,61);// first leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.92,0.00);
      glVertex2f(-0.86,0.00);
      glVertex2f(-0.89,0.05);
      glEnd();

      glColor3ub(97,138,61);// second leaf of tree
      glBegin(GL_TRIANGLES);
      glVertex2f(-0.94,0.03);
      glVertex2f(-0.84,0.03);
      glVertex2f(-0.89,0.1);
      glEnd();


    //*********End of Trees********




      glLoadIdentity();



  }

  void DaySky(){
    glColor3ub(135,206,235); //sky
    glBegin(GL_QUADS);
    glVertex2f(-1,0.3);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();

  }

   void MorningSky(){
    glColor3ub(167,121,69); //sky
    glBegin(GL_QUADS);
    glVertex2f(-1,0.3);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();

  }

  void AfternoonSky(){
    glColor3ub(255,210,127); //sky
    glBegin(GL_QUADS);
    glVertex2f(-1,0.3);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();

  }

   void NightSky(){
    glColor3ub(71, 74, 87); //sky
    glBegin(GL_QUADS);
    glVertex2f(-1,0.3);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();

  }

   void CloudyDaySky(){
    glColor3ub(194,213,220); //sky
    glBegin(GL_QUADS);
    glVertex2f(-1,0.3);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();

  }


   void Annex1(){
       //shade
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-1,0.27);
     glVertex2f(1,0.27);
     glVertex2f(1,0.3);
     glVertex2f(-1,0.3);
     glEnd();

     //bricks

     glColor3ub(134,89,45);
     glBegin(GL_QUADS);
     glVertex2f(-1,-0.1);
     glVertex2f(1,-0.1);
     glVertex2f(1,0.27);
     glVertex2f(-1,0.27);
     glEnd();

     //**** windows start*****

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****

      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.75f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


   glLoadIdentity();


   //***** University Door ******

    glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.35);
     glVertex2f(-0.25,0.35);
     glEnd();

     glColor3ub(135,206,235);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.27);
     glVertex2f(-0.25,0.27);
     glEnd();

    //***** End of University Door ******

 // ******* ID Checker Security Gate ********

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();


 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 glLoadIdentity();











   }

   void Annex1N(){
       //shade
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-1,0.27);
     glVertex2f(1,0.27);
     glVertex2f(1,0.3);
     glVertex2f(-1,0.3);
     glEnd();

     //bricks

     glColor3ub(119,136,153);
     glBegin(GL_QUADS);
     glVertex2f(-1,-0.1);
     glVertex2f(1,-0.1);
     glVertex2f(1,0.27);
     glVertex2f(-1,0.27);
     glEnd();

     //**** windows start*****

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****

      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.75f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


   glLoadIdentity();


   //***** University Door ******

    glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.35);
     glVertex2f(-0.25,0.35);
     glEnd();

     glColor3ub(71,74,87);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.27);
     glVertex2f(-0.25,0.27);
     glEnd();

    //***** End of University Door ******

 // ******* ID Checker Security Gate ********

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();


 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 glLoadIdentity();











   }

   void Annex1M(){
       //shade
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-1,0.27);
     glVertex2f(1,0.27);
     glVertex2f(1,0.3);
     glVertex2f(-1,0.3);
     glEnd();

     //bricks

     glColor3ub(134,89,45);
     glBegin(GL_QUADS);
     glVertex2f(-1,-0.1);
     glVertex2f(1,-0.1);
     glVertex2f(1,0.27);
     glVertex2f(-1,0.27);
     glEnd();

     //**** windows start*****

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****

      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.75f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


   glLoadIdentity();


   //***** University Door ******

    glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.35);
     glVertex2f(-0.25,0.35);
     glEnd();

     glColor3ub(167,121,69);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.27);
     glVertex2f(-0.25,0.27);
     glEnd();

    //***** End of University Door ******

 // ******* ID Checker Security Gate ********

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();


 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 glLoadIdentity();











   }


   void Annex1A(){
       //shade
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-1,0.27);
     glVertex2f(1,0.27);
     glVertex2f(1,0.3);
     glVertex2f(-1,0.3);
     glEnd();

     //bricks

     glColor3ub(134,89,45);
     glBegin(GL_QUADS);
     glVertex2f(-1,-0.1);
     glVertex2f(1,-0.1);
     glVertex2f(1,0.27);
     glVertex2f(-1,0.27);
     glEnd();

     //**** windows start*****

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****

      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.75f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


   glLoadIdentity();


   //***** University Door ******

    glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.35);
     glVertex2f(-0.25,0.35);
     glEnd();

     glColor3ub(255,210,127);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.27);
     glVertex2f(-0.25,0.27);
     glEnd();

    //***** End of University Door ******

 // ******* ID Checker Security Gate ********

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();


 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 glLoadIdentity();











   }


   void Annex1R(){
       //shade
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-1,0.27);
     glVertex2f(1,0.27);
     glVertex2f(1,0.3);
     glVertex2f(-1,0.3);
     glEnd();

     //bricks

     glColor3ub(134,89,45);
     glBegin(GL_QUADS);
     glVertex2f(-1,-0.1);
     glVertex2f(1,-0.1);
     glVertex2f(1,0.27);
     glVertex2f(-1,0.27);
     glEnd();

     //**** windows start*****

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****

      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.75f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


      //**** windows start*****
     glTranslatef(+0.25f, 0.0f, 0.0f);
     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.96,0.00);
     glVertex2f(-0.80,0.00);
     glVertex2f(-0.80,0.18);
     glVertex2f(-0.96,0.18);
     glEnd();

     glColor3ub(0,0,0);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.02);
     glVertex2f(-0.81,0.02);
     glVertex2f(-0.81,0.16);
     glVertex2f(-0.95,0.16);
     glEnd();


     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.95,0.07);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.90,0.11);
     glVertex2f(-0.95,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.81,0.07);
     glVertex2f(-0.81,0.11);
     glVertex2f(-0.87,0.11);
     glEnd();

     glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.02);
     glVertex2f(-0.87,0.02);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.90,0.07);
     glEnd();


      glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.90,0.07);
     glVertex2f(-0.87,0.07);
     glVertex2f(-0.87,0.16);
     glVertex2f(-0.90,0.16);
     glEnd();

     //**** windows end  *****


   glLoadIdentity();


   //***** University Door ******

    glColor3ub(255,255,255);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.35);
     glVertex2f(-0.25,0.35);
     glEnd();

     glColor3ub(194,213,220); //sky
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(0.25,-0.1);
     glVertex2f(0.25,0.27);
     glVertex2f(-0.25,0.27);
     glEnd();

    //***** End of University Door ******

 // ******* ID Checker Security Gate ********

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();


 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********

 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 // ******* ID Checker Security Gate ********
     glTranslatef(+0.12f, 0.0f, 0.0f);
     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.25,-0.1);
     glVertex2f(-0.21,-0.1);
     glVertex2f(-0.21,-0.05);
     glVertex2f(-0.25,-0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.24,-0.05);
     glVertex2f(-0.22,-0.05);
     glVertex2f(-0.22,0.05);
     glVertex2f(-0.24,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.22,-0.02);
     glVertex2f(-0.19,-0.02);
     glVertex2f(-0.19,0.05);
     glVertex2f(-0.22,0.05);
     glEnd();

     glColor3ub(207,213,221);
     glBegin(GL_QUADS);
     glVertex2f(-0.185,-0.02);
     glVertex2f(-0.15,-0.02);
     glVertex2f(-0.15,0.05);
     glVertex2f(-0.185,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.16,-0.05);
     glVertex2f(-0.14,-0.05);
     glVertex2f(-0.14,0.05);
     glVertex2f(-0.16,0.05);
     glEnd();

     glColor3ub(196,202,206);
     glBegin(GL_QUADS);
     glVertex2f(-0.17,-0.1);
     glVertex2f(-0.13,-0.1);
     glVertex2f(-0.13,-0.05);
     glVertex2f(-0.17,-0.05);
     glEnd();



 // ******* End of ID Checker Security Gate ********


 glLoadIdentity();











   }

   void Annex2(){
     //*****Tin Shade*****
     glColor3ub(80,220,100); //tin
     glBegin(GL_QUADS);
     glVertex2f(-1,0.50);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.52,0.55);
     glVertex2f(-0.94,0.55);
     glEnd();

     glColor3ub(105,105,105); //shadow
     glBegin(GL_TRIANGLES);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.48,0.50);
     glVertex2f(-0.52,0.55);
     glEnd();

     glColor3ub(105,105,105);//shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.49);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.48,0.50);
     glVertex2f(-1,0.50);
     glEnd();

      glColor3ub(220,240,239);//widnow
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.48,0.3);
      glVertex2f(-0.48,0.49);
      glVertex2f(-1,0.49);
      glEnd();

      glColor3ub(184,176,155);//stone
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.72,0.3);
      glVertex2f(-0.74,0.33);
      glVertex2f(-1,0.33);
      glEnd();

      glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.33);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.74,0.49);
     glVertex2f(-1,0.49);
     glEnd();

     glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-0.72,0.30);
     glVertex2f(-0.48,0.30);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.74,0.33);
     glEnd();



     glColor3ub(135,206,235); //sky
     glBegin(GL_QUADS);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.74,0.49);
     glEnd();

      glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();



glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

      glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);
      glLoadIdentity();


    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

  glLoadIdentity();

   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();





glLoadIdentity();

  glColor3ub(0,0,0);// grill
  glBegin(GL_LINES);
  glVertex2f(-1,0.315);
  glVertex2f(-0.73,0.315);
  glEnd();

  glLoadIdentity();

  }

  void Annex2A(){
     //*****Tin Shade*****
     glColor3ub(80,220,100); //tin
     glBegin(GL_QUADS);
     glVertex2f(-1,0.50);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.52,0.55);
     glVertex2f(-0.94,0.55);
     glEnd();

     glColor3ub(105,105,105); //shadow
     glBegin(GL_TRIANGLES);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.48,0.50);
     glVertex2f(-0.52,0.55);
     glEnd();

     glColor3ub(105,105,105);//shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.49);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.48,0.50);
     glVertex2f(-1,0.50);
     glEnd();

      glColor3ub(220,240,239);//widnow
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.48,0.3);
      glVertex2f(-0.48,0.49);
      glVertex2f(-1,0.49);
      glEnd();

      glColor3ub(184,176,155);//stone
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.72,0.3);
      glVertex2f(-0.74,0.33);
      glVertex2f(-1,0.33);
      glEnd();

      glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.33);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.74,0.49);
     glVertex2f(-1,0.49);
     glEnd();

     glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-0.72,0.30);
     glVertex2f(-0.48,0.30);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.74,0.33);
     glEnd();



     glColor3ub(255,210,127); //sky
     glBegin(GL_QUADS);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.74,0.49);
     glEnd();

      glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();



glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

      glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);
      glLoadIdentity();


    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

  glLoadIdentity();

   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();





glLoadIdentity();

  glColor3ub(0,0,0);// grill
  glBegin(GL_LINES);
  glVertex2f(-1,0.315);
  glVertex2f(-0.73,0.315);
  glEnd();

  glLoadIdentity();

  }


   void Annex2N(){
     //*****Tin Shade*****
     glColor3ub(112,128,144); //tin
     glBegin(GL_QUADS);
     glVertex2f(-1,0.50);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.52,0.55);
     glVertex2f(-0.94,0.55);
     glEnd();

     glColor3ub(105,105,105); //shadow
     glBegin(GL_TRIANGLES);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.48,0.50);
     glVertex2f(-0.52,0.55);
     glEnd();

     glColor3ub(105,105,105);//shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.49);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.48,0.50);
     glVertex2f(-1,0.50);
     glEnd();

      glColor3ub(220,240,239);//widnow
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.48,0.3);
      glVertex2f(-0.48,0.49);
      glVertex2f(-1,0.49);
      glEnd();

      glColor3ub(184,176,155);//stone
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.72,0.3);
      glVertex2f(-0.74,0.33);
      glVertex2f(-1,0.33);
      glEnd();

      glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.33);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.74,0.49);
     glVertex2f(-1,0.49);
     glEnd();

     glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-0.72,0.30);
     glVertex2f(-0.48,0.30);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.74,0.33);
     glEnd();



     glColor3ub(71,74,87); //sky
     glBegin(GL_QUADS);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.74,0.49);
     glEnd();

      glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();



glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

      glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);
      glLoadIdentity();


    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

  glLoadIdentity();

   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();





glLoadIdentity();

  glColor3ub(0,0,0);// grill
  glBegin(GL_LINES);
  glVertex2f(-1,0.315);
  glVertex2f(-0.73,0.315);
  glEnd();

  glLoadIdentity();

  }

   void Annex2M(){
     //*****Tin Shade*****
     glColor3ub(80,220,100); //tin
     glBegin(GL_QUADS);
     glVertex2f(-1,0.50);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.52,0.55);
     glVertex2f(-0.94,0.55);
     glEnd();

     glColor3ub(105,105,105); //shadow
     glBegin(GL_TRIANGLES);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.48,0.50);
     glVertex2f(-0.52,0.55);
     glEnd();

     glColor3ub(105,105,105);//shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.49);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.48,0.50);
     glVertex2f(-1,0.50);
     glEnd();

      glColor3ub(220,240,239);//widnow
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.48,0.3);
      glVertex2f(-0.48,0.49);
      glVertex2f(-1,0.49);
      glEnd();

      glColor3ub(184,176,155);//stone
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.72,0.3);
      glVertex2f(-0.74,0.33);
      glVertex2f(-1,0.33);
      glEnd();

      glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.33);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.74,0.49);
     glVertex2f(-1,0.49);
     glEnd();

     glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-0.72,0.30);
     glVertex2f(-0.48,0.30);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.74,0.33);
     glEnd();



      glColor3ub(167,121,69);//sky
     glBegin(GL_QUADS);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.74,0.49);
     glEnd();

      glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();



glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

      glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);
      glLoadIdentity();


    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

  glLoadIdentity();

   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();





glLoadIdentity();

  glColor3ub(0,0,0);// grill
  glBegin(GL_LINES);
  glVertex2f(-1,0.315);
  glVertex2f(-0.73,0.315);
  glEnd();

  glLoadIdentity();

  }

  void Annex2R(){
     //*****Tin Shade*****
     glColor3ub(80,220,100); //tin
     glBegin(GL_QUADS);
     glVertex2f(-1,0.50);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.52,0.55);
     glVertex2f(-0.94,0.55);
     glEnd();

     glColor3ub(105,105,105); //shadow
     glBegin(GL_TRIANGLES);
     glVertex2f(-0.56,0.50);
     glVertex2f(-0.48,0.50);
     glVertex2f(-0.52,0.55);
     glEnd();

     glColor3ub(105,105,105);//shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.49);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.48,0.50);
     glVertex2f(-1,0.50);
     glEnd();

      glColor3ub(220,240,239);//widnow
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.48,0.3);
      glVertex2f(-0.48,0.49);
      glVertex2f(-1,0.49);
      glEnd();

      glColor3ub(184,176,155);//stone
      glBegin(GL_QUADS);
      glVertex2f(-1,0.3);
      glVertex2f(-0.72,0.3);
      glVertex2f(-0.74,0.33);
      glVertex2f(-1,0.33);
      glEnd();

      glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-1,0.33);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.74,0.49);
     glVertex2f(-1,0.49);
     glEnd();

     glColor3ub(211,211,211);//light shadow
     glBegin(GL_QUADS);
     glVertex2f(-0.72,0.30);
     glVertex2f(-0.48,0.30);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.74,0.33);
     glEnd();



     glColor3ub(194,213,220); //sky
     glBegin(GL_QUADS);
     glVertex2f(-0.74,0.33);
     glVertex2f(-0.48,0.33);
     glVertex2f(-0.48,0.49);
     glVertex2f(-0.74,0.49);
     glEnd();

      glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();



glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

      glTranslatef(+0.03f, 0.0f, 0.0f);

     glColor3ub(192,192,192); //stand
     glBegin(GL_QUADS);
     glVertex2f(-0.995,0.33);
     glVertex2f(-0.985,0.33);
     glVertex2f(-0.985,0.49);
     glVertex2f(-0.995,0.49);
     glEnd();

     glTranslatef(+0.03f, 0.0f, 0.0f);
      glLoadIdentity();


    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

     glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

    glTranslatef(+0.038f, 0.0f, 0.0f);
    glColor3ub(192,192,192);
    glBegin(GL_QUADS);
    glVertex2f(-0.715,0.3);
    glVertex2f(-0.705,0.3);
    glVertex2f(-0.705,0.49);
    glVertex2f(-0.715,0.49);
    glEnd();

  glLoadIdentity();

   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();

   glTranslatef(+0.015f, 0.0f, 0.0f);
   glColor3ub(0,0,0);//grill
   glBegin(GL_QUADS);
   glVertex2f(-0.99,0.3);
   glVertex2f(-0.985,0.3);
   glVertex2f(-0.985,0.33);
   glVertex2f(-0.99,0.33);
   glEnd();





glLoadIdentity();

  glColor3ub(0,0,0);// grill
  glBegin(GL_LINES);
  glVertex2f(-1,0.315);
  glVertex2f(-0.73,0.315);
  glEnd();

  }

  void rain(){

               glTranslatef(0,position,0);
    glColor3f(1,1,1);
    glLineWidth(2);

    glTranslatef(0,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(-0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(2,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();

    glTranslatef(0.1,0,0);
    glBegin(GL_LINES);
        glVertex2f(1,1);
        glVertex2f(0.985,.95);
        glVertex2f(0.97,.9);
        glVertex2f(0.955,.85);
        glVertex2f(0.94,.8);
        glVertex2f(0.925,.75);
        glVertex2f(0.91,.7);
        glVertex2f(0.895,.65);
        glVertex2f(0.88,.6);
        glVertex2f(0.865,.55);
        glVertex2f(0.85,.5);
        glVertex2f(0.835,.45);
        glVertex2f(0.82,.4);
        glVertex2f(0.805,.35);
        glVertex2f(0.79,0.3);
        glVertex2f(0.775,0.25);
        glVertex2f(0.76,0.2);
        glVertex2f(0.745,0.15);
        glVertex2f(0.73,0.1);
        glVertex2f(0.715,0.05);
        glVertex2f(0.7,0);
        glVertex2f(0.685,-.05);
        glVertex2f(0.67,-.1);
        glVertex2f(0.655,-.15);
        glVertex2f(0.64,-.2);
        glVertex2f(0.625,-.25);
        glVertex2f(0.61,-.3);
        glVertex2f(0.595,-.35);
        glVertex2f(0.58,-.4);
        glVertex2f(0.565,-.45);
        glVertex2f(0.55,-.5);
        glVertex2f(0.535,-.55);
        glVertex2f(0.52,-.6);
        glVertex2f(0.505,-.65);
        glVertex2f(0.49,-.7);
        glVertex2f(0.475,-.75);
        glVertex2f(0.46,-.8);
        glVertex2f(0.445,-.85);
        glVertex2f(0.43,-.9);
        glVertex2f(0.415,-.95);
    glEnd();
    glLoadIdentity();

  }

  void Lamp(){


/*

  GLfloat global_ambient[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

       glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




        glTranslatef(+0.15f, 0.0f, 0.0f);
        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);//Enable Light Effect
        glLoadIdentity();

*/
       GLfloat x=-.75f; GLfloat y=-0.35f; GLfloat radius =0.020f;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x1=-.90f; GLfloat y1=-0.35f; GLfloat radius1 =0.020f;
	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x1 + (radius1 * cos(i *  twicePi / lineAmount)),
			    y1 + (radius1* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.60);
        glVertex2f(-0.80,-0.60);
        glVertex2f(-0.80,-0.57);
        glVertex2f(-0.85,-0.57);
        glEnd();


        glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.82,-0.57);
        glVertex2f(-0.83,-0.57);
        glVertex2f(-0.83,-0.27);
        glVertex2f(-0.82,-0.27);
        glEnd();
        glLoadIdentity();


         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.98,-0.29);
        glVertex2f(-0.82,-0.29);
        glVertex2f(-0.82,-0.27);
        glVertex2f(-0.98,-0.27);
        glEnd();

         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.83,-0.29);
        glVertex2f(-0.67,-0.29);
        glVertex2f(-0.67,-0.27);
        glVertex2f(-0.83,-0.27);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();

         glTranslatef(+0.15f, 0.0f, 0.0f);
         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();
        glLoadIdentity();

/*  light 1 end */


/*
  glTranslatef(+0.4f, 0.0f, 0.0f);
 GLfloat global_ambient1[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

  glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




        glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
*/
         glTranslatef(+0.4f, 0.0f, 0.0f);

       GLfloat x2=-.75f; GLfloat y2=-0.35f; GLfloat radius2 =0.020f;

	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x2 + (radius2 * cos(i *  twicePi / lineAmount)),
			    y2 + (radius2* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x3=-.90f; GLfloat y3=-0.35f; GLfloat radius3 =0.020f;
	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x3 + (radius3 * cos(i *  twicePi / lineAmount)),
			    y3 + (radius3* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glLoadIdentity();

	  glTranslatef(+0.4f, 0.0f, 0.0f);

         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.60);
        glVertex2f(-0.80,-0.60);
        glVertex2f(-0.80,-0.57);
        glVertex2f(-0.85,-0.57);
        glEnd();


        glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.82,-0.57);
        glVertex2f(-0.83,-0.57);
        glVertex2f(-0.83,-0.27);
        glVertex2f(-0.82,-0.27);
        glEnd();
        glLoadIdentity();

         glTranslatef(+0.4f, 0.0f, 0.0f);
         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.98,-0.29);
        glVertex2f(-0.82,-0.29);
        glVertex2f(-0.82,-0.27);
        glVertex2f(-0.98,-0.27);
        glEnd();

         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.83,-0.29);
        glVertex2f(-0.67,-0.29);
        glVertex2f(-0.67,-0.27);
        glVertex2f(-0.83,-0.27);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();

         glTranslatef(+0.15f, 0.0f, 0.0f);
         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();
        glLoadIdentity();

  /*  light 2 end */


   /* glTranslatef(+0.8f, 0.0f, 0.0f);


 GLfloat global_ambient2[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
*/
         glTranslatef(+0.8f, 0.0f, 0.0f);

       GLfloat x4=-.75f; GLfloat y4=-0.35f; GLfloat r4 =0.020f;

	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x4 + (r4 * cos(i *  twicePi / lineAmount)),
			    y4 + (r4* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x5=-.90f; GLfloat y5=-0.35f; GLfloat r5 =0.020f;
	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x5 + (r5 * cos(i *  twicePi / lineAmount)),
			    y5 + (r5* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glLoadIdentity();

	  glTranslatef(+0.8f, 0.0f, 0.0f);

         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.60);
        glVertex2f(-0.80,-0.60);
        glVertex2f(-0.80,-0.57);
        glVertex2f(-0.85,-0.57);
        glEnd();


        glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.82,-0.57);
        glVertex2f(-0.83,-0.57);
        glVertex2f(-0.83,-0.27);
        glVertex2f(-0.82,-0.27);
        glEnd();
        glLoadIdentity();

         glTranslatef(+0.8f, 0.0f, 0.0f);
         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.98,-0.29);
        glVertex2f(-0.82,-0.29);
        glVertex2f(-0.82,-0.27);
        glVertex2f(-0.98,-0.27);
        glEnd();

         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.83,-0.29);
        glVertex2f(-0.67,-0.29);
        glVertex2f(-0.67,-0.27);
        glVertex2f(-0.83,-0.27);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();

         glTranslatef(+0.15f, 0.0f, 0.0f);
         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();
        glLoadIdentity();

  /*  light 3 end */



 /* glTranslatef(+1.6f, 0.0f, 0.0f);


 GLfloat global_ambient3[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
*/
         glTranslatef(+1.6f, 0.0f, 0.0f);

       GLfloat x8=-.75f; GLfloat y8=-0.35f; GLfloat r8 =0.020f;

	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x8 + (r8 * cos(i *  twicePi / lineAmount)),
			    y8 + (r8* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x9=-.90f; GLfloat y9=-0.35f; GLfloat r9 =0.020f;
	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x9 + (r9 * cos(i *  twicePi / lineAmount)),
			    y9 + (r9* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glLoadIdentity();

	  glTranslatef(+1.6f, 0.0f, 0.0f);

         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.60);
        glVertex2f(-0.80,-0.60);
        glVertex2f(-0.80,-0.57);
        glVertex2f(-0.85,-0.57);
        glEnd();


        glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.82,-0.57);
        glVertex2f(-0.83,-0.57);
        glVertex2f(-0.83,-0.27);
        glVertex2f(-0.82,-0.27);
        glEnd();
        glLoadIdentity();

         glTranslatef(+1.6f, 0.0f, 0.0f);
         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.98,-0.29);
        glVertex2f(-0.82,-0.29);
        glVertex2f(-0.82,-0.27);
        glVertex2f(-0.98,-0.27);
        glEnd();

         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.83,-0.29);
        glVertex2f(-0.67,-0.29);
        glVertex2f(-0.67,-0.27);
        glVertex2f(-0.83,-0.27);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();

         glTranslatef(+0.15f, 0.0f, 0.0f);
         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();
        glLoadIdentity();

  /*  light 4 end */
/*
   glTranslatef(+1.2f, 0.0f, 0.0f);


 GLfloat global_ambient4[] = {0.0,5.9,0.0,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);//A lighting model parameter.
   glEnable(GL_LIGHTING);//Enable Light Effect

        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();




         glTranslatef(+0.15f, 0.0f, 0.0f);

        glColor3ub(255,229,124);
        glBegin(GL_QUADS);
        glVertex2f(-0.94,-0.60);
        glVertex2f(-0.86,-0.60);
        glVertex2f(-0.89,-0.32);
        glVertex2f(-0.91,-0.32);
        glEnd();
        glDisable(GL_LIGHTING);
        glLoadIdentity();
*/
         glTranslatef(+1.2f, 0.0f, 0.0f);

       GLfloat x6=-.75f; GLfloat y6=-0.35f; GLfloat r6 =0.020f;

	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x6 + (r6 * cos(i *  twicePi / lineAmount)),
			    y6 + (r6* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	GLfloat x7=-.90f; GLfloat y7=-0.35f; GLfloat r7 =0.020f;
	glColor3ub(211,200,87);

	glBegin(GL_TRIANGLE_FAN);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x7 + (r7 * cos(i *  twicePi / lineAmount)),
			    y7 + (r7* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
	glLoadIdentity();

	  glTranslatef(+1.2f, 0.0f, 0.0f);

         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.85,-0.60);
        glVertex2f(-0.80,-0.60);
        glVertex2f(-0.80,-0.57);
        glVertex2f(-0.85,-0.57);
        glEnd();


        glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.82,-0.57);
        glVertex2f(-0.83,-0.57);
        glVertex2f(-0.83,-0.27);
        glVertex2f(-0.82,-0.27);
        glEnd();
        glLoadIdentity();

         glTranslatef(+1.2f, 0.0f, 0.0f);
         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.98,-0.29);
        glVertex2f(-0.82,-0.29);
        glVertex2f(-0.82,-0.27);
        glVertex2f(-0.98,-0.27);
        glEnd();

         glColor3ub(0,128,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.83,-0.29);
        glVertex2f(-0.67,-0.29);
        glVertex2f(-0.67,-0.27);
        glVertex2f(-0.83,-0.27);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();




        glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();

         glTranslatef(+0.15f, 0.0f, 0.0f);
         glColor3ub(128,0,128);
        glBegin(GL_QUADS);
        glVertex2f(-0.89,-0.29);
        glVertex2f(-0.91,-0.29);
        glVertex2f(-0.92,-0.35);
        glVertex2f(-0.88,-0.35);
        glEnd();
        glLoadIdentity();

  /*  light 5 end */



 }

  void cloud1()
{


    int i;

	GLfloat x=.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




}

 void cloud1R()
{


    int i;

	GLfloat x=.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	   glColor3ub(104, 163, 179);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	   glColor3ub(104, 163, 179);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




}


void cloud2()
{
   // glLoadIdentity();

    int i;

	GLfloat x=-.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void cloud2R()
{
   // glLoadIdentity();

    int i;

	GLfloat x=-.5f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void cloud3()
{

    // glLoadIdentity();
    int i;

	GLfloat x=0.0f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.05f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.05f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.02f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.1f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void cloud3R()
{

    // glLoadIdentity();
    int i;

	GLfloat x=0.0f; GLfloat y=.86f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.05f; GLfloat b=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.05f; GLfloat d=.83f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.02f; GLfloat f=.8f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.1f; GLfloat h=.82f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(104, 163, 179);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

 void bird()
{
    glPushMatrix();
    glTranslatef(-position1,0.0f, 0.0f);

       int i;

	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mm, nn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
	/////2nd bird////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmm, nnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	/////3rd bird/////
	glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

	GLfloat mmmm=-0.638f; GLfloat nnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmm,nnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	////4th bird////
	GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(225, 225, 208);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmmm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nnnnn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(225, 225, 208 );
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();

    glPopMatrix();

    glLoadIdentity();


}


void Dim(){
     int i;
 GLfloat a=0.60f; GLfloat b=.26f; GLfloat r =.3f;
	int triangleAmount = 100;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(192, 192, 192);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
		glLoadIdentity();







}


void DimNight(){
     int i;
 GLfloat a=0.60f; GLfloat b=.26f; GLfloat r =.3f;
	int triangleAmount = 100;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(131, 137, 158);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
		glLoadIdentity();







}

void DimLines(){
      glBegin(GL_LINES);
		glColor3ub(245,245,245);
		glVertex2f(0.42,0.5);
		glVertex2f(0.78,0.5);
		glEnd();

		glBegin(GL_LINES);
		glColor3ub(245,245,245);
		glVertex2f(0.36,0.44);
		glVertex2f(0.84,0.44);
		glEnd();

		glBegin(GL_LINES);
		glColor3ub(245,245,245);
		glVertex2f(0.325,0.38);
		glVertex2f(0.875,0.38);
		glEnd();

		glBegin(GL_LINES);
		glColor3ub(245,245,245);
		glVertex2f(0.31,0.32);
		glVertex2f(0.89,0.32);
		glEnd();


}

 void car1(){
      glPushMatrix();
    glTranslatef(-position3,0.0f, 0.0f);

         glBegin(GL_QUADS);
         glColor3ub(255,69,0);
         glVertex2f(-0.90,-0.76);
         glVertex2f(-0.88,-0.76);
         glVertex2f(-0.88,-0.72);
         glVertex2f(-0.90,-0.73);
         glEnd();

         glBegin(GL_QUADS);
         glColor3ub(255,69,0);
         glVertex2f(-0.88,-0.76);
         glVertex2f(-0.84,-0.76);
         glVertex2f(-0.84,-0.72);
         glVertex2f(-0.88,-0.72);
         glEnd();

         glBegin(GL_TRIANGLES);
         glColor3ub(255,69,0);
         glVertex2f(-0.90,-0.73);
         glVertex2f(-0.84,-0.72);
         glVertex2f(-0.84,-0.65);

         glEnd();

         glBegin(GL_QUADS);
         glColor3ub(255,69,0);
         glVertex2f(-0.84,-0.76);
         glVertex2f(-0.80,-0.76);
         glVertex2f(-0.80,-0.65);
         glVertex2f(-0.84,-0.65);
         glEnd();

         glBegin(GL_QUADS);
         glColor3ub(255,69,0);
         glVertex2f(-0.80,-0.76);
         glVertex2f(-0.77,-0.76);
         glVertex2f(-0.77,-0.705);
         glVertex2f(-0.80,-0.65);
         glEnd();

         glBegin(GL_QUADS);
         glColor3ub(255,69,0);
         glVertex2f(-0.77,-0.76);
         glVertex2f(-0.75,-0.76);
         glVertex2f(-0.75,-0.705);
         glVertex2f(-0.77,-0.705);
         glEnd();

         glBegin(GL_QUADS);
         glColor3ub(0,0,0);
         glVertex2f(-0.82,-0.70);
         glVertex2f(-0.78,-0.70);
         glVertex2f(-0.80,-0.66);
         glVertex2f(-0.82,-0.66);
         glEnd();

         glBegin(GL_QUADS);
         glColor3ub(0,0,0);
         glVertex2f(-0.85,-0.70);
         glVertex2f(-0.83,-0.70);
         glVertex2f(-0.83,-0.66);
         glVertex2f(-0.84,-0.66);
         glEnd();


         int i;

	GLfloat x=-0.86f; GLfloat y=-0.765f; GLfloat radius =0.012f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	GLfloat x1=-0.79f; GLfloat y1=-0.765f; GLfloat radius1 =0.012f;


	//GLfloat radius = 0.8f; //radius


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		 glEnd();

		glPopMatrix();

    glLoadIdentity();






 }



  void sun(){
    glPushMatrix();
         glTranslatef(0.0f,-positionsun, 0.0f);

      int i;
  GLfloat x=-.8f; GLfloat y=.50f; GLfloat radius =.06f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 228, 132);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glPushMatrix();
         glTranslatef(0.0f,-positionsun, 0.0f);

	glEnd();
    glPopMatrix();
    glLoadIdentity();



  }


   void sunAfter(){
    glPushMatrix();
         glTranslatef(0.0f,positionsun, 0.0f);

      int i;
  GLfloat x=-.8f; GLfloat y=0.98f; GLfloat radius =.06f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 150, 1);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glPushMatrix();
         glTranslatef(0.0f,-positionsun, 0.0f);

	glEnd();

	glPopMatrix();
	glLoadIdentity();




  }

  void Moon(){



      int i;
  GLfloat x=-.70f; GLfloat y=.75f; GLfloat radius =.06f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(244, 244, 244);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glPushMatrix();
         glTranslatef(0.0f,-positionsun, 0.0f);

	glEnd();





  }


void sound1()
{


    PlaySound("birds.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound2()
{


    PlaySound("horn.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound3()
{


    PlaySound("car.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void sound4()
{


    PlaySound("night.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}










void keyboard(unsigned char key, int x, int y)
{
   switch (key)
   {
        case 'r':
            rainy=1;
            break;

            case 'n':
            rainy=0;
            break;

            case 'm':
            view=1;
            break;



   }
   glutPostRedisplay();
}


 void displaymorning(){

          glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
           glClear(GL_COLOR_BUFFER_BIT);
           Roads();

           PlaygroundMorning();

           MorningSky();

           sun();

             Dim();

           Annex1M();

           Trees();
           Annex2M();
           DimLines();
           Lamp();

           bird();


            glLoadIdentity();



            if(rainy==1)
    {

          Roads();

           PlaygroundMorning();

          CloudyDaySky();

            Dim();
          glLoadIdentity();

           Annex1R();

           Trees();

           Annex2R();
           DimLines();

           Lamp();


        rain();
        glLoadIdentity();
        glPushMatrix();
        glTranslatef(-position2,0.0f, 0.0f);
        cloud1R();
         cloud2R();
        cloud3R();
        glPopMatrix();
        glLoadIdentity();
         bird();

 glLoadIdentity();



    }


      if(rainy==0){
         Roads();

           PlaygroundMorning();

           MorningSky();


           sun();

           Dim();
           glLoadIdentity();
           Annex1M();
           Trees();
           Annex2M();
           DimLines();
           Lamp();
            glTranslatef(-position2,0.0f, 0.0f);

           cloud1();
             cloud2();
            cloud3();
        glPopMatrix();

        glLoadIdentity();

        bird();

        glLoadIdentity();

      }
       glFlush();

   }

   void displayday(){
          glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
           glClear(GL_COLOR_BUFFER_BIT);

           Roads();

           Playground();
           car1();
           DaySky();
           sun();
             Dim();

           Annex1();

           Trees();
           Annex2();
           DimLines();
           Lamp();

           bird();

            glLoadIdentity();
            car1();

            if(rainy==1)
    {

          Roads();

           Playground();

          CloudyDaySky();

            Dim();
          glLoadIdentity();

           Annex1R();

           Trees();

           Annex2R();
           DimLines();

           Lamp();


        rain();
        glLoadIdentity();
        glPushMatrix();
        glTranslatef(-position2,0.0f, 0.0f);
        cloud1R();
         cloud2R();
        cloud3R();
        glPopMatrix();
        glLoadIdentity();

         bird();

 glLoadIdentity();




    }

      if(rainy==0){
         Roads();

           Playground();

           DaySky();
           sun();
           Dim();
           glLoadIdentity();
           Annex1();
           Trees();
           Annex2();
           DimLines();
           Lamp();
            glTranslatef(-position2,0.0f, 0.0f);

           cloud1();
             cloud2();
            cloud3();
        glPopMatrix();

        glLoadIdentity();

        bird();

        glLoadIdentity();
          car1();


      }
       glFlush();
   }

    void displayafter(){
          glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
           glClear(GL_COLOR_BUFFER_BIT);
           Roads();

          PlaygroundMorning();

           AfternoonSky();
           sunAfter();
             Dim();

           Annex1A();


           Trees();
           Annex2A();
           DimLines();
           Lamp();

           bird();

            glLoadIdentity();
            car1();

            if(rainy==1)
    {
          Roads();

           PlaygroundMorning();
          AfternoonSky();

            Dim();
          glLoadIdentity();

           Annex1A();

           Trees();

           Annex2A();
           DimLines();

           Lamp();


        rain();
        glLoadIdentity();
        glPushMatrix();
        glTranslatef(-position2,0.0f, 0.0f);
        cloud1R();
         cloud2R();
        cloud3R();
        glPopMatrix();
        glLoadIdentity();

         bird();

 glLoadIdentity();
       car1();



    }

      if(rainy==0){
         Roads();

           PlaygroundMorning();

           AfternoonSky();
           sunAfter();
           Dim();
           glLoadIdentity();
           Annex1A();
           Trees();
           Annex2A();
           DimLines();
           Lamp();
            glTranslatef(-position2,0.0f, 0.0f);

           cloud1();
             cloud2();
            cloud3();
        glPopMatrix();

        glLoadIdentity();

        bird();

        glLoadIdentity();
          car1();


      }
       glFlush();
   }


   void displaynight(){
          glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
           glClear(GL_COLOR_BUFFER_BIT);
           Roads();

          PlaygroundEvening();

           NightSky();
            Moon();
             DimNight();

           Annex1N();


           Trees();
           Annex2N();
           DimLines();
           Lamp();



            glLoadIdentity();


            if(rainy==1)
    {
          Roads();

           PlaygroundEvening();
         NightSky();

            DimNight();
          glLoadIdentity();

           Annex1N();

           Trees();

           Annex2N();
           DimLines();


           Lamp();


        rain();
        glLoadIdentity();
        glPushMatrix();
        glTranslatef(-position2,0.0f, 0.0f);
        cloud1R();
         cloud2R();
        cloud3R();
        glPopMatrix();
        glLoadIdentity();



 glLoadIdentity();




    }

      if(rainy==0){
         Roads();

           PlaygroundEvening();

           NightSky();
           Moon();
           DimNight();
           glLoadIdentity();
           Annex1N();
           Trees();
           Annex2N();
           DimLines();
           Lamp();




        glLoadIdentity();



      }
       glFlush();
   }




   void display1(int a){
          sound1();
       glutDisplayFunc(displaymorning);
   }

   void display2(int b){
         sound3();
       glutDisplayFunc(displayday);
   }

   void display3(int c){
        sound2();
       glutDisplayFunc(displayafter);
   }

    void display4(int d){
        sound4();
       glutDisplayFunc(displaynight);
   }


 void display(){

     glutTimerFunc(0,display1,0);

     glutTimerFunc(5000,display2,0);

     glutTimerFunc(10000,display3,0);

      glutTimerFunc(15000,display4,0);



 }













  int main(int argc, char** argv) {
             glutInit(&argc, argv);
             glutInitWindowSize (1600, 900);
	         glutInitWindowPosition (0, 0);
	         glutCreateWindow("AIUB PERMENANT CAMPUS");


        glutDisplayFunc(display);




            glutKeyboardFunc(keyboard);
            glutTimerFunc(100, update, 0);
            glutTimerFunc(100, update1, 0);
            glutTimerFunc(100, update2, 0);
            glutTimerFunc(100, update3, 0);
            glutTimerFunc(100, update4, 0);

            glutMainLoop();
            return 0;




  }


























