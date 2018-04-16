#include "qvtktest.h"

#include "vtkRenderer.h"
#include "vtkRenderWindow.h"

#include <vtkAutoInit.h>
VTK_MODULE_INIT(vtkRenderingOpenGL);
VTK_MODULE_INIT(vtkInteractionStyle);


QVtkTest::QVtkTest()
{
	this->setupUi(this);
}

QVtkTest::~QVtkTest()
{

}
