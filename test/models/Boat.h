#include <GL/glut.h>
#include <math.h>

class Boat
{
private:
    GLfloat positionBoat = 0.0f;

    GLfloat speed = 0.01f;

    void drawBoat()
    {
        glPushMatrix();
        glTranslatef(positionBoat, 0.0f, 0.0f);
        glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113);
        glVertex2f(0.37f, 0.42f);
        glVertex2f(0.32f, 0.44f);
        glVertex2f(0.37f, 0.4f);
        glEnd();
        glBegin(GL_TRIANGLES);
        glColor3ub(34, 153, 84);
        glVertex2f(0.45f, 0.41f);
        glVertex2f(0.45f, 0.43f);
        glVertex2f(0.47f, 0.41f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(44, 62, 80);
        glVertex2f(0.37f, 0.36f);
        glVertex2f(0.39f, 0.37f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(44, 62, 80);
        glVertex2f(0.39f, 0.35f);
        glVertex2f(0.41f, 0.37f);
        glEnd();
        int i;
        GLfloat x = .4f;
        GLfloat y = .4f;
        GLfloat radius = .04f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * 3.14;
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(213, 244, 13);
        glVertex2f(x, y);
        for (i = 0; i <= triangleAmount; i++)
        {
            glVertex2f(
                x + (radius * cos(i * twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount)));
        }
    }

public:
    GLfloat getSpeed()
    {
        return this->speed;
    }
    void setSpeed(GLfloat speed)
    {
        this->speed = speed;
    }

    GLfloat getPositionBoat()
    {
        return positionBoat;
    }
    void setPositionBoat(GLfloat position)
    {
        positionBoat = position;
    }

    void renderBoat()
    {
        this->drawBoat();
    }
};