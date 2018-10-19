#ifndef I_DECOMPRESSOR_H
#define I_DECOMPRESSOR_H

#include <QObject>
#include <QString>
#include <js_callback.h>

class i_decompressor : public QObject
{
    Q_OBJECT
public:
    explicit i_decompressor(QObject *parent = nullptr);

signals:

public slots:
    void execute(QString info, QString callbackfunction);

    static i_decompressor* instance();

private:
    js_callback callback_;
};

#endif // I_DECOMPRESSOR_H
