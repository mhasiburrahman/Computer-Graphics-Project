#include <GL/glut.h>

class Bird
{
private:
    GLfloat positionBird1 = 0.0f;

    GLfloat positionBird2 = 0.0f;

    void drawBird1()
    {
        glPushMatrix();
        glTranslatef(positionBird1, 0.0f, 0.0f);

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
        glEnd();

        int i1;
        GLfloat x1 = .44f;
        GLfloat y1 = .42f;
        GLfloat radius1 = .02f;
        int triangleAmount1 = 20;

        GLfloat twicePi1 = 2.0f * 3.14;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(243, 156, 18);
        glVertex2f(x1, y1);
        for (i1 = 0; i1 <= triangleAmount1; i1++)
        {
            glVertex2f(
                x1 + (radius1 * cos(i1 * twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1)));
        }
        glEnd();

        int i11;
        GLfloat x11 = .45f;
        GLfloat y11 = .42f;
        GLfloat radius11 = .005f;
        int triangleAmount11 = 20;

        GLfloat twicePi11 = 2.0f * 3.14;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(39, 55, 70);
        glVertex2f(x11, y11);
        for (i11 = 0; i11 <= triangleAmount11; i11++)
        {
            glVertex2f(
                x11 + (radius11 * cos(i11 * twicePi11 / triangleAmount11)),
                y11 + (radius11 * sin(i11 * twicePi11 / triangleAmount11)));
        }
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113);
        glVertex2f(0.4f, 0.42f);
        glVertex2f(0.35f, 0.45f);
        glVertex2f(0.4f, 0.4f);
        glEnd();

        glPopMatrix();

        glFlush();
    }

    void bird2()
    {

        glPushMatrix();
        glTranslatef(positionBird2, 0.0f, 0.0f);

        glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113);
        glVertex2f(0.57f, 0.62f);
        glVertex2f(0.52f, 0.63f);
        glVertex2f(0.57f, 0.6f);
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(34, 153, 84);
        glVertex2f(0.65f, 0.61f);
        glVertex2f(0.65f, 0.63f);
        glVertex2f(0.67f, 0.61f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(44, 62, 80);
        glVertex2f(0.57f, 0.56f);
        glVertex2f(0.59f, 0.57f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(44, 62, 80);
        glVertex2f(0.59f, 0.55f);
        glVertex2f(0.61f, 0.57f);
        glEnd();

        int i2;
        GLfloat x2 = .6f;
        GLfloat y2 = .6f;
        GLfloat radius2 = .04f;
        int triangleAmount2 = 20;

        GLfloat twicePi2 = 2.0f * 3.14;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(213, 244, 13);
        glVertex2f(x2, y2);
        for (i2 = 0; i2 <= triangleAmount2; i2++)
        {
            glVertex2f(
                x2 + (radius2 * cos(i2 * twicePi2 / triangleAmount2)),
                y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2)));
        }
        glEnd();

        int i12;
        GLfloat x12 = .64f;
        GLfloat y12 = .62f;
        GLfloat radius12 = .02f;
        int triangleAmount12 = 20;

        GLfloat twicePi12 = 2.0f * 3.14;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(243, 156, 18);
        glVertex2f(x12, y12);
        for (i12 = 0; i12 <= triangleAmount12; i12++)
        {
            glVertex2f(
                x12 + (radius12 * cos(i12 * twicePi12 / triangleAmount12)),
                y12 + (radius12 * sin(i12 * twicePi12 / triangleAmount12)));
        }
        glEnd();

        int i112;
        GLfloat x112 = .65f;
        GLfloat y112 = .62f;
        GLfloat radius112 = .005f;
        int triangleAmount112 = 20;

        GLfloat twicePi112 = 2.0f * 3.14;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(39, 55, 70);
        glVertex2f(x112, y112);
        for (i112 = 0; i112 <= triangleAmount112; i112++)
        {
            glVertex2f(
                x112 + (radius112 * cos(i112 * twicePi112 / triangleAmount112)),
                y112 + (radius112 * sin(i112 * twicePi112 / triangleAmount112)));
        }
        glEnd();

        glBegin(GL_TRIANGLES);
        glColor3ub(248, 196, 113);
        glVertex2f(0.6f, 0.62f);
        glVertex2f(0.55f, 0.65f);
        glVertex2f(0.6f, 0.6f);
        glEnd();

        glPopMatrix();
        glFlush();
    }

public:
    GLfloat getPositionBird1()
    {
        return positionBird1;
    }

    void setPositionBird1(GLfloat positionBird1)
    {
        this->positionBird1 = positionBird1;
    }

    GLfloat getPositionBird2()
    {
        return positionBird2;
    }

    void setPositionBird2(GLfloat positionBird2)
    {
        this->positionBird2 = positionBird2;
    }

    void renderBird()
    {
        this->drawBird1();
    }
};
