/* 
 * File:   GUI.cpp
 * Author: matt
 * 
 * Created on 16 February 2010, 13:20
 */

#include "GUI.h"


GUI::GUI(QWidget *parent, const char *name) {

    layout = new QGridLayout(this);
    layout->setMargin(1);
    image_manager = new ImageManager();
    //optiontabs= new QTabWidget();

    //optiontabs->addTab(modelmanager,"Image Loading");
    //optiontabs->addTab(splinegen,"Spline Generation");
    //optiontabs->addTab(modelgen,"Model Building");

    layout->addWidget(image_manager,0,0);
    //layout->addWidget(optiontabs,1,0,1,3);
}



GUI::~GUI() {
}

void GUI::generateModel()
{
    /*int num_images = loader->getNumImages();
    connect(displaywidget,SIGNAL(newImage(QImage)),modelgen,SLOT(setImage(QImage)));
    connect(loader,SIGNAL(newTexture(QImage)),modelgen,SLOT(setTexture(QImage)));
    for(int loop =0 ; loop< num_images; loop++)
    {
        loader->nextImage(true);
    }
    disconnect(displaywidget,SIGNAL(newImage(QImage)),modelgen,SLOT(setImage(QImage)));
    disconnect(loader,SIGNAL(newTexture(QImage)),modelgen,SLOT(setTexture(QImage)));*/
}
