/* 
 * File:   ImageLoader.cpp
 * Author: matt
 * 
 * Created on 29 January 2010, 11:36
 */

#include "ImageLoader.h"

ImageLoader::ImageLoader(QWidget *parent, const char *name) {
    layout = new QGridLayout(this);
    file_opener = new QFileDialog();
    file_opener->setNameFilter(tr("Images (*.png *.bmp *.jpg *.jpeg)"));
    file_opener->setFileMode(QFileDialog::ExistingFiles);
    file_opener->setVisible(false);
    tex_opener = new QFileDialog();
    tex_opener->setNameFilter(tr("Images (*.png *.bmp *.jpg *.jpeg)"));
    tex_opener->setFileMode(QFileDialog::ExistingFiles);
    tex_opener->setVisible(false);
    QPushButton *load_button = new QPushButton("Load Images");
    QPushButton *next_button = new QPushButton("Next Image");
    QPushButton *prev_button = new QPushButton("Prev Image");
    QPushButton *load_textures = new QPushButton("Load Textures");
    layout->addWidget(load_button, 0, 0);
    layout->addWidget(load_textures, 0, 1);
    layout->addWidget(prev_button, 1, 0);
    layout->addWidget(next_button, 1, 1);


    connect(load_button, SIGNAL(clicked(bool)), this, SLOT(displayLoadDialog(bool)));
    connect(load_textures, SIGNAL(clicked(bool)), this, SLOT(displayTexDialog(bool)));
    connect(prev_button, SIGNAL(clicked(bool)), this, SLOT(nextImage(bool)));
    connect(next_button, SIGNAL(clicked(bool)), this, SLOT(prevImage(bool)));
    connect(file_opener, SIGNAL(filesSelected(const QStringList &)), this, SLOT(loadImages(const QStringList &)));
    connect(tex_opener, SIGNAL(filesSelected(const QStringList &)), this, SLOT(loadTextures(const QStringList &)));
    image_index = 0;
}

ImageLoader::~ImageLoader() {
}

void ImageLoader::loadImages(const QStringList & selected) {
    image_list = selected;
    image_index = 0;
    //int num_files = selected.length();

    /*for (int loop = 0; loop < num_files; loop++) {
        QImage image;
        image.load(selected.at(loop));
        image_list.push_back(image);
    }*/


    if (image_list.size() > 0) {
        emit newNumImages(image_list.size());
        if (image_list.size() == tex_list.size()) {
            emit newEnableTexture(true);
        } else {
            emit newEnableTexture(false);
        }
    }
}

void ImageLoader::loadTextures(const QStringList & selected) {
    tex_list = selected;
    tex_index = 0;

    if (image_list.size() == tex_list.size()) {
        emit newEnableTexture(true);
    } else {
        emit newEnableTexture(false);
    }
}

void ImageLoader::displayLoadDialog(bool passed) {
    file_opener->setVisible(true);
}

void ImageLoader::displayTexDialog(bool passed) {
    tex_opener->setVisible(true);
}

void ImageLoader::nextImage(bool passed) {
    if (image_list.size() > 0) {
        image_index++;
        if (image_index == image_list.size()) {
            image_index = 0;
        }
        QImage current_image;
        current_image.load(image_list.at(image_index));
        emit newImage(current_image);
        if (image_list.size() == tex_list.size()) {
            QImage current_tex;
            current_tex.load(tex_list.at(image_index));
            emit newTexture(current_tex);
        } else {
            cerr << "No or too few texture images loaded" << endl;
        }
    }
}

void ImageLoader::prevImage(bool passed) {
    if (image_list.size() > 0) {
        image_index--;
        if (image_index == -1) {
            image_index = image_list.size() - 1;
        }
        QImage current_image;
        current_image.load(image_list.at(image_index));
        emit newImage(current_image);
        if (image_list.size() == tex_list.size()) {
            QImage current_tex;
            current_tex.load(tex_list.at(image_index));
            emit newTexture(current_tex);
        } else {
            cerr << "No or too few texture images loaded" << endl;
        }
    }
}

void ImageLoader::getImage() {
    if (image_list.size() > 0) {
        QImage current_image;
        current_image.load(image_list.at(image_index));
        emit newImage(current_image);
        if (image_list.size() == tex_list.size()) {
            QImage current_tex;
            current_tex.load(tex_list.at(image_index));
            emit newTexture(current_tex);
        } else {
            cerr << "No or too few texture images loaded" << endl;
        }
    }
}

void ImageLoader::getTexture(int passed_index) {
    if (tex_list.size() > 0) {
        if (passed_index > tex_list.size())return;
        if (passed_index < 0)return;
        QImage current_texture;
        current_texture.load(tex_list.at(passed_index));
        emit newTexture(current_texture);
    }
}

void ImageLoader::getImage(int passed_index) {
    if (image_list.size() > 0) {
        if (passed_index > image_list.size())return;
        if (passed_index < 0)return;
        QImage current_image;
        current_image.load(image_list.at(passed_index));
        emit newImage(current_image);
    }
}

int ImageLoader::getNumImages() {
    return image_list.size();
}