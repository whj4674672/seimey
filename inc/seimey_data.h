#ifndef SEIMEY_DATA_H
#define SEIMEY_DATA_H
#include <QDebug>

void seimey_create_workspace(void);
void seimey_msgoutput(QtMsgType type, const QMessageLogContext &context, const QString &msg);
#endif // SEIMEY_DATA_H