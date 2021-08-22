#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "database.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    const database &data() const;
    void setData(const database &newData);

public slots:

private slots:
    void on_save_2_clicked();

private:
    Ui::Dialog *ui;
    database mData;
};

#endif // DIALOG_H
