#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QStyle>
#include <QAudioOutput>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void clicked();
private:
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QPushButton *button;
    QBoxLayout *layout;
    QAudioOutput *audioOutput;
};
#endif // WIDGET_H
