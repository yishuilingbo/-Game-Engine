#include <iostream>
#include <string>
#include <Scene/Scene.h>

int main()
{
	XYY_Scene * myscene = new XYY_Scene();
	myscene->sc->loadXML("include/Scxmlexample/coordinate.xml");
	myscene->run();
	return 0;
}