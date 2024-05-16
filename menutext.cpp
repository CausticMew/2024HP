#include "menutext.h"
#include "ui_menutext.h"

menuText::menuText(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menuText)
{
    ui->setupUi(this);
}

menuText::~menuText()
{
    delete ui;
}
