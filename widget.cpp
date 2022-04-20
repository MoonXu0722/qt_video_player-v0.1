#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
        player = new QMediaPlayer;
        videoWidget = new QVideoWidget;
        audioOutput = new QAudioOutput;
        button = new QPushButton;
        this->resize(600, 400);
        button->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        connect(button, &QAbstractButton::clicked, this, &Widget::clicked);
        layout = new QVBoxLayout;
        layout->addWidget(videoWidget);
        layout->addWidget(button);
        setLayout(layout);
        player->setVideoOutput(videoWidget);
        player->setAudioOutput(audioOutput);
        player->setSource(QUrl::fromLocalFile("hama.mp4"));
}

Widget::~Widget()
{
}

void Widget::clicked() {
    qDebug() << "clicked";
    player->play();
}
