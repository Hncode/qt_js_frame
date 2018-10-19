#ifndef I_COMPRESSOR_H
#define I_COMPRESSOR_H

#include <QObject>

class i_compressor : public QObject
{
    Q_OBJECT
public:
    explicit i_compressor(QObject *parent = nullptr);

signals:

public slots:
};

#endif // I_COMPRESSOR_H
