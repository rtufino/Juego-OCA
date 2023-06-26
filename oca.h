#ifndef OCA_H
#define OCA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Oca; }
QT_END_NAMESPACE

class Oca : public QMainWindow
{
    Q_OBJECT

public:
    Oca(QWidget *parent = nullptr);
    ~Oca();

private:
    Ui::Oca *ui;
};
#endif // OCA_H
