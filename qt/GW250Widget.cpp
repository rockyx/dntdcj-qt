#include "GW250Widget.h"
#include "ui_GW250Widget.h"

GW250Widget::GW250Widget(QWidget *parent)
  : QWidget(parent)
  , _ui(new Ui::GW250Widget)
  , _dataContext(nullptr)
{
  _ui->setupUi(this);
}

GW250Widget::~GW250Widget()
{

}

void GW250Widget::setDataContext(ECUPresenter *dataContext)
{
  if (_dataContext != nullptr) {
    // for future disconnect
  }
  _dataContext = dataContext;
  _ui->troubleCodePage->setDataContext(_dataContext);
  _ui->liveDataPage->setDataContext(_dataContext);
  _ui->menuPage->setDataContext(_dataContext);
}
