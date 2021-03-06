#ifndef CALNWIN_H
#define CALNWIN_H

#include <QDialog>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include <QString>

namespace Ui {
class CalnWin;
}

class CalnWin : public QDialog
{
    Q_OBJECT

public:
    explicit CalnWin(QWidget *parent = nullptr);
    ~CalnWin();
    
public slots:
void currentClock();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();
    
    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();
    
    private:
    Ui::CalnWin *ui;
    QTimer *clock;
};

#endif // CALNWIN_H

