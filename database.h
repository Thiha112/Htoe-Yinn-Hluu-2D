#ifndef DATABASE_H
#define DATABASE_H

#include<QObject>
#include<QString>

class database
{
    QString main_result;
    QString morning_result;
    QString evening_result;
    QString morning_modern;
    QString morning_internet;
    QString evening_modern;
    QString evening_internet;
    QString update;
    QString set;
    QString value;


public:
    const QString &getMain_result() const;
    void setMain_result(const QString &newMain_result);
    const QString &getMorning_result() const;
    void setMorning_result(const QString &newMorning_result);
    const QString &getEvening_result() const;
    void setEvening_result(const QString &newEvening_result);
    const QString &getMorning_modern() const;
    void setMorning_modern(const QString &newMorning_modern);
    const QString &getMorning_internet() const;
    void setMorning_internet(const QString &newMorning_internet);
    const QString &getEvening_modern() const;
    void setEvening_modern(const QString &newEvening_modern);
    const QString &getEvening_internet() const;
    void setEvening_internet(const QString &newEvening_internet);
    const QString &getUpdate() const;
    void setUpdate(const QString &newUpdate);
    const QString &getSet() const;
    void setSet(const QString &newSet);
    const QString &getValue() const;
    void setValue(const QString &newValue);
};

#endif // DATABASE_H
