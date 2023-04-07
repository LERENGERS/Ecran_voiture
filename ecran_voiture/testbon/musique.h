#ifndef MUSIQUE_H
#define MUSIQUE_H

#include <QDockWidget>

namespace Ui {
class musique;
}

class musique : public QDockWidget
{
    Q_OBJECT

public:
    explicit musique(QWidget *parent = nullptr);
    ~musique();

private:
    Ui::musique *ui;
};

#endif // MUSIQUE_H
