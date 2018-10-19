#include "i_decompressor.h"

i_decompressor::i_decompressor(QObject *parent) : QObject(parent)
{

}

void i_decompressor::execute(QString info, QString callbackfunction)
{


    callback_.set(callbackfunction); // register callback

     // asyn do something, callback
    callback_(info);
}

i_decompressor* i_decompressor::instance()
{
    static i_decompressor decompressor;
    return &decompressor;
}
