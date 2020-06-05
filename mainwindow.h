#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "towerposition.h"
#include "tower.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);

private:
    void loadTowerPositions();
    bool canBuyTower() const;
    void drawPlayerGold(QPainter *painter);

private:
    Ui::MainWindow *		ui;
    int						m_waves;
    int						m_playerHp;
    int						m_playrGold;
    bool					m_gameEnded;
    bool					m_gameWin;
    QList<TowerPosition>	m_towerPositionsList;
    QList<Tower *>			m_towersList;
};

#endif // MAINWINDOW_H
