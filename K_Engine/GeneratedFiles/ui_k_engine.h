/********************************************************************************
** Form generated from reading UI file 'k_engine.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_K_ENGINE_H
#define UI_K_ENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_K_EngineClass
{
public:
    QAction *actionLoad_Scene;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QOpenGLWidget *openGLWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QMenu *menuFiles;
    QMenu *menuHelp;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *K_EngineClass)
    {
        if (K_EngineClass->objectName().isEmpty())
            K_EngineClass->setObjectName(QStringLiteral("K_EngineClass"));
        K_EngineClass->resize(1307, 825);
        actionLoad_Scene = new QAction(K_EngineClass);
        actionLoad_Scene->setObjectName(QStringLiteral("actionLoad_Scene"));
        centralWidget = new QWidget(K_EngineClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-1, -1, 1301, 771));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        openGLWidget = new QOpenGLWidget(horizontalLayoutWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        openGLWidget->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(openGLWidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSlider = new QSlider(horizontalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        K_EngineClass->setCentralWidget(centralWidget);
        horizontalLayoutWidget->raise();
        menuBar = new QMenuBar(K_EngineClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1307, 23));
        menuFiles = new QMenu(menuBar);
        menuFiles->setObjectName(QStringLiteral("menuFiles"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        K_EngineClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(K_EngineClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        K_EngineClass->setStatusBar(statusBar);
        mainToolBar = new QToolBar(K_EngineClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        K_EngineClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFiles->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFiles->addAction(actionLoad_Scene);

        retranslateUi(K_EngineClass);

        QMetaObject::connectSlotsByName(K_EngineClass);
    } // setupUi

    void retranslateUi(QMainWindow *K_EngineClass)
    {
        K_EngineClass->setWindowTitle(QApplication::translate("K_EngineClass", "K_Engine", 0));
        actionLoad_Scene->setText(QApplication::translate("K_EngineClass", "Load Scene", 0));
        label->setText(QApplication::translate("K_EngineClass", "Di Level:", 0));
        menuFiles->setTitle(QApplication::translate("K_EngineClass", "Files", 0));
        menuHelp->setTitle(QApplication::translate("K_EngineClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class K_EngineClass: public Ui_K_EngineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_K_ENGINE_H
