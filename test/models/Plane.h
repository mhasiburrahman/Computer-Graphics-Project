#include <GL/glut.h>

class Plane
{
private:
    GLfloat planePosition = -0.7f;
    GLfloat planeSpeed = 0.015f;

public:
    Plane()
    {
        this->drawPlane();
    }

    GLfloat getPlanePosition()
    {
        return this->planePosition;
    }

    void setPlanePosition(GLfloat planePosition)
    {
        this->planePosition = planePosition;
    }

    GLfloat getPlaneSpeed()
    {
        return this->planeSpeed;
    }

    void setPlaneSpeed(GLfloat planeSpeed)
    {
        this->planeSpeed = planeSpeed;
    }

    void drawPlane()
    {
        glPushMatrix();
        glTranslatef(getPlanePosition(), 0.0f, 0.0f);

        this->drawPlaneStructure();
        this->drawBackStand();
        this->drawBackRudder();
        this->drawRightWing();

        glPopMatrix();
        glFlush();
    }

    void drawPlaneStructure()
    {
        glBegin(GL_POLYGON);
        glColor3ub(255, 212, 128);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.31f, 0.715f);
        glVertex2f(0.32f, 0.705f);
        glVertex2f(0.33f, 0.695f);
        glVertex2f(0.34f, 0.683f);
        glVertex2f(0.36f, 0.67f);
        glVertex2f(0.37f, 0.66f);
        glVertex2f(0.376f, 0.64f);
        glVertex2f(0.37f, 0.63f);
        glColor3ub(255, 187, 51);
        glVertex2f(0.3f, 0.605f);
        glVertex2f(0.07f, 0.6f);
        glVertex2f(0.05f, 0.605f);
        glVertex2f(0.03f, 0.610f);
        glVertex2f(0.0f, 0.615f);
        glVertex2f(-0.02f, 0.620f);
        glVertex2f(-0.05f, 0.628f);
        glVertex2f(-0.075f, 0.636f);
        glVertex2f(-0.085f, 0.645f);
        glVertex2f(-0.092f, 0.645f);
        glVertex2f(-0.1f, 0.658f);
        glVertex2f(-0.13f, 0.665f);
        glVertex2f(-0.11f, 0.680f);
        glVertex2f(-0.1f, 0.688f);
        glVertex2f(-0.05f, 0.7f);
        glVertex2f(-0.04f, 0.71f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 212, 128);
        glVertex2f(0.0f, 0.72f);
        glVertex2f(0.3f, 0.72f);
        glVertex2f(0.31f, 0.715f);
        glVertex2f(0.32f, 0.705f);
        glVertex2f(0.33f, 0.695f);
        glVertex2f(0.34f, 0.683f);
        glVertex2f(0.36f, 0.67f);
        glVertex2f(0.37f, 0.66f);
        glVertex2f(0.376f, 0.64f);
        glVertex2f(0.37f, 0.63f);
        glColor3ub(255, 187, 51);
        glVertex2f(0.3f, 0.605f);
        glVertex2f(0.07f, 0.6f);
        glVertex2f(0.05f, 0.605f);
        glVertex2f(0.03f, 0.610f);
        glVertex2f(0.0f, 0.615f);
        glVertex2f(-0.02f, 0.620f);
        glVertex2f(-0.05f, 0.628f);
        glVertex2f(-0.075f, 0.636f);
        glVertex2f(-0.085f, 0.645f);
        glVertex2f(-0.092f, 0.645f);
        glVertex2f(-0.1f, 0.658f);
        glVertex2f(-0.13f, 0.665f);
        glVertex2f(-0.11f, 0.680f);
        glVertex2f(-0.1f, 0.688f);
        glVertex2f(-0.05f, 0.7f);
        glVertex2f(-0.04f, 0.71f);
        glEnd();
    }

    void drawBackStand()
    {
        glBegin(GL_POLYGON);
        glColor3ub(230, 138, 0);
        glVertex2f(-0.13f, 0.68f);
        glColor3ub(255, 194, 102);
        glVertex2f(-0.045f, 0.680f);
        glVertex2f(-0.04f, 0.67f);
        glVertex2f(-0.045f, 0.66f);
        glVertex2f(-0.13f, 0.66f);
        glVertex2f(-0.135f, 0.67f);
        glEnd();
    }

    void drawBackRudder()
    {
        glBegin(GL_POLYGON);
        glColor3ub(255, 133, 102);
        glVertex2f(-0.12f, 0.83f);
        glVertex2f(-0.1f, 0.828f);
        glVertex2f(-0.096f, 0.825f);
        glVertex2f(-0.086f, 0.820f);
        glVertex2f(-0.074f, 0.810f);
        glVertex2f(-0.045f, 0.74f);
        glVertex2f(-0.043f, 0.720f);
        glVertex2f(0.01f, 0.72f);
        glColor3ub(255, 184, 77);
        glVertex2f(-0.085f, 0.693f);
        glEnd();
    }

    void drawRightWing()
    {
        glBegin(GL_QUADS);
        glColor3ub(255, 204, 153);
        glVertex2f(0.05f, 0.55f);
        glVertex2f(0.0f, 0.55f);
        glColor3ub(255, 166, 77);
        glVertex2f(0.1f, 0.62f);
        glVertex2f(0.2f, 0.62f);
        glEnd();
    }
};