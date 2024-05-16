#ifndef MENUTEXT_H
#define MENUTEXT_H

#include <QWidget>

namespace Ui {
class menuText;
}

class menuText : public QWidget
{
    Q_OBJECT

public:
    explicit menuText(QWidget *parent = nullptr);
    ~menuText();

private:
    Ui::menuText *ui;
};

#endif // MENUTEXT_H
