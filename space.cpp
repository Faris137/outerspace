/*******************************************************
 * By {Faris137} 2016-2021 <{farishassan2012@gmail.com}>
 *
 * This file is part of {Computer Graphics Lab6 Homework}.
 *
 *******************************************************/
#include <GL/glut.h>
#include "space.hpp"

using namespace space;

void MyPoints::draw()
{
    glPointSize(1.0);
    srand(1);
    glColor3f(1.0f, 1.0f, 1.0f);
    GLfloat x,y,z;
    glBegin(GL_POINTS);
    for (int i=0; i<1000; ++i)
    {
        x = (rand()%10000)/10000.0 * 80.0 - 50.0;
        y = (rand()%10000)/10000.0 * 80.0 - 50.0;
        z = (rand()%10000)/10000.0 * 80.0 - 50.0;
        //z = 0;
        glVertex3f(x,y,z);
    }
    glEnd();
}

void Planets::draw()
{
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

 glDisable(GL_CULL_FACE);
    GLUquadricObj *pObj = gluNewQuadric();
    gluQuadricNormals(pObj, GLU_SMOOTH);
    glPushMatrix();

    //small planet
    glColor3f(1.0f, 0.01f, 0.02f);
    glTranslatef(-4.0f, 30.0f, -20.0f);
    gluSphere(pObj, 2.0f, 12, 12);

    //big planet to the lift
    glColor3f(0.48f, 0.45f, 0.45f);
    glTranslatef(-30.0f, -30.0f, +40.0f);
    gluSphere(pObj, 13.0f, 24, 12);

    //medium planet to the right
    glColor3f(.48f, 0.45f, 0.45f);
    glTranslatef(70.0f, 0.0f, 0.0f);
    gluSphere(pObj, 9.0f, 24, 12);

    // the ring of medium plant
    glColor3f(.53f, 0.37f, 0.37f);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glRotatef(120.f,1.f,0.f,0.0f);
    gluDisk(pObj, 9.0f, 12.0f, 26, 13);

    //medium planet to the right
    glColor3f(.48f, 0.45f, 0.45f);
    glTranslatef(-40.0f, 30.0f, -40.0f);
    gluSphere(pObj, 5.0f, 12, 12);

    glPopMatrix();
    gluDeleteQuadric(pObj);
    glEnable(GL_CULL_FACE);
}

void Sat::draw()
{
    glDisable(GL_CULL_FACE);
    GLUquadricObj *pObj = gluNewQuadric();
    gluQuadricNormals(pObj, GLU_SMOOTH);
    glPushMatrix();

    glColor3f(58/255.0f, 58/255.0f, 112/255.0f);
    glRotatef(60.f,1.f,-1.f,0.0f);
    gluCylinder(pObj, 2.0f, 2.0f, 15.0f, 24, 72);

    glBegin(GL_TRIANGLES);
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-4.0f,8.0f,0.0f);
    glVertex3f(0.f,0.0f,0.0f);
    glVertex3f(4.f,8.0f,0.0f);

    glVertex3f(0.f,0.0f,0.0f);
    glVertex3f(-4.0f,-8.0f,0.0f);
    glVertex3f(4.f,-8.0f,0.0f);
    glEnd();

    glTranslatef(0.0f, 0.0f, 15.0f);

    glBegin(GL_TRIANGLES);
    glColor3f(0.6f, 0.6f, 0.0f);
    glVertex3f(-4.0f,8.0f,0.0f);
    glVertex3f(0.f,0.0f,0.0f);
    glVertex3f(4.f,8.0f,0.0f);

    glVertex3f(0.f,0.0f,0.0f);
    glVertex3f(-4.0f,-8.0f,0.0f);
    glVertex3f(4.f,-8.0f,0.0f);
    glEnd();

    glColor3f(58/255.0f, 58/255.0f, 112/255.0f);
    gluCylinder(pObj, 2.0f, 0.0f, 5.0f, 24, 72);
    glTranslatef(0.0f, 0.0f, -20.0f);
    gluCylinder(pObj, 0.0f, 2.0f, 5.0f, 24, 72);

    glPopMatrix();
    gluDeleteQuadric(pObj);
    glEnable(GL_CULL_FACE);
}

