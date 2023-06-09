#ifndef CHANGE_ACCESS_NAME_H
#define CHANGE_ACCESS_NAME_H

#include <QDialog>

namespace Ui {
class change_access_name;
}

class change_access_name : public QDialog
{
    Q_OBJECT

public:
    explicit change_access_name(QWidget *parent = nullptr);
    ~change_access_name();

private:
    Ui::change_access_name *ui;
};

#endif // CHANGE_ACCESS_NAME_H
