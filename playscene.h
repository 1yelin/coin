#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>
#include "mycoin.h"

class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
    //explicit PlayScene(QWidget *parent = nullptr);
    PlayScene(int levelNum);

    int levelIndex; //内部成员属性  记录所选择关卡

    //重写PaintEvent事件
    void paintEvent(QPaintEvent *);

    int gameArray[4][4]; //二维数组 维护每个关卡的具体数据

    MyCoin * coinBtn[4][4];

    //是否胜利的标志
     bool isWin;


signals:
    void chooseSceneBack();
};

#endif // PLAYSCENE_H
