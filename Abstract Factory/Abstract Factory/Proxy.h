#pragma once

#include<iostream>

class IGraphic {
public:
	virtual void Draw() = 0;
};




class Graphic : public IGraphic {
public:
	Graphic();
	~Graphic();
	void Draw();
};




Graphic::Graphic() {
};

Graphic::~Graphic() {
};

void Graphic::Draw() {
	std::cout << "Drawing Graphic Object" << std::endl;
}




class GraphicProxy : public IGraphic {
public:
	GraphicProxy();
	~GraphicProxy();
	void Draw();

private:
	Graphic* graphic;
	Graphic* getInstance(void);
};




GraphicProxy::GraphicProxy() {
	this->graphic = 0;
}
GraphicProxy::~GraphicProxy() {
	if (graphic) { delete graphic; }
}
Graphic* GraphicProxy::getInstance(void) {
	if (!graphic)
	{
		graphic = new Graphic();
	}
	return graphic;
}
void GraphicProxy::Draw() {
	getInstance()->Draw();
}