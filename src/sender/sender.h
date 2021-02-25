#pragma once

#include <QtCore/QObject>

class Sender final : public QObject {
    Q_OBJECT
public:
    explicit Sender(QObject* parent = nullptr);
};
