#define GLM_FORCE_RADIANS

#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLWidget>
#include <QOpenGLShader>
#include <QOpenGLShaderProgram>
#include "glm/glm.hpp"
#include <QKeyEvent>
#include "glm/gtc/matrix_transform.hpp"

class MyGLWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
  Q_OBJECT

  public:
    MyGLWidget (QWidget *parent=0);
    ~MyGLWidget ();
    
  protected:
    // initializeGL - Aqui incluim les inicialitzacions del contexte grafic.
    virtual void initializeGL ();

    // paintGL - Mètode cridat cada cop que cal refrescar la finestra.
    // Tot el que es dibuixa es dibuixa aqui.
    virtual void paintGL ();
 
    // resize - Es cridat quan canvia la mida del widget
    virtual void resizeGL (int width, int height);  
    
    virtual void keyPressEvent(QKeyEvent *e);
    
    virtual void modelTransform(glm::vec3 value);
    
    virtual void modelTransform2(glm::vec3 value);

  private:
    void createBuffers ();
    void carregaShaders ();
    
    // attribute locations
    GLuint vertexLoc, varLoc, transLoc;
    
    // Program
    QOpenGLShaderProgram *program;

    GLuint VAO, VBO;
    
    float scl;
};
