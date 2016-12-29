#ifndef K_ENGINE_H
#define K_ENGINE_H

#include <QtWidgets/QMainWindow>
#include "ui_k_engine.h"

class K_Engine : public QMainWindow
{
	Q_OBJECT

public:
	K_Engine(QWidget *parent = 0);
	~K_Engine();

private:
	Ui::K_EngineClass ui;
};

#endif // K_ENGINE_H
