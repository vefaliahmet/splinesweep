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
    QPushButton *makemodel = new QPushButton("Generate Model");

    //camobject = new QCamObject(this, 0);
    loader = new ImageLoader(this,0);
    spline_display = new QDisplayWidget(this, 0);
    texture_display = new QDisplayWidget(this, 0);

    modelgen = new ModelGen();
    splinegen = new SplineGenerator();

    layout->addWidget(spline_display,0,0);
    layout->addWidget(texture_display,0,1);
    layout->addWidget(loader,1,0,1,2);
    layout->addWidget(makemodel,2,0,1,2);
    layout->addWidget(splinegen,3,0,1,2);

    connect(makemodel,SIGNAL(clicked(bool)),this,SLOT(generateModel(bool)));
    connect(loader,SIGNAL(newNumImages(int)),modelgen, SLOT(setNumImages(int)));
    connect(loader,SIGNAL(newImage(QImage)),splinegen,SLOT(setImage(QImage)));
    connect(splinegen,SIGNAL(newImage(QImage)),spline_display,SLOT(setImage(QImage)));
    
    connect(loader,SIGNAL(newTexture(QImage)),texture_display,SLOT(setImage(QImage)));

    //connect(loader,SIGNAL(newImage(QImage)),texture_display,SLOT(setAlphaChannel(QImage)));

    connect(splinegen,SIGNAL(requestImage()),loader,SLOT(getImage()));
}

GUI::~GUI() {
}

void GUI::generateModel(bool passed)
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
