#ifndef ADDRESSCOMBO_H
#define ADDRESSCOMBO_H

#include "camount.h"
#include "precompiled.h"

class AddressCombo : public QComboBox 
{
    Q_OBJECT;
public:
    explicit    AddressCombo(QWidget* parent = nullptr);

    QString     itemText(int i);
    QString     currentText();

    void        addItem(const QString& itemText, CAmount bal);
    void        insertItem(int index, const QString& text, CAmount bal = CAmount::fromqint64(0));

public slots:
    void setCurrentText(const QString& itemText);

private:
};

#endif // ADDRESSCOMBO_H
