#ifndef JEUXACTIF_H
#define JEUXACTIF_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QVBoxLayout>

namespace Ui {
class JeuxActif;
}

class JeuxActif : public QWidget
{
    Q_OBJECT

public:
    explicit JeuxActif(QWidget *parent = nullptr);
    ~JeuxActif();

private:
    Ui::JeuxActif *ui;
};

#endif // JEUXACTIF_H
