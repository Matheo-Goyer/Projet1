#include "MaClasse.h"
#include "ui_MaClasse.h"

MaClasse::MaClasse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MaClasse)
{
    ui->setupUi(this);
}

MaClasse::~MaClasse()
{
    delete ui;
}

