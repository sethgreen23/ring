
/* Copyright (c) 2013-2016 Mahmoud Fayed <msfclipper@yahoo.com> */
#ifndef GACTION_H
#define GACTION_H
#include <QApplication>
#include <QAction>
extern "C" {
#include "ring.h"
}

class GAction : public QAction
{

  Q_OBJECT

  public:

    VM *pVM;

    List *pParaList;

    char cClickEvent[100];


    GAction(QWidget *parent,VM *pVM );

    ~GAction();

    void geteventparameters(void) ;

    void setClickEvent(const char *cStr);


  public slots:

    void clickedSlot();

};

#endif

