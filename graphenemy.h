//#ifndef GRAPHENEMY_H
//#define GRAPHENEMY_H
//#include <QGraphicsPixmapItem>
//#include <QObject>
//#include <QKeyEvent>
//#include <stack>
//#include "player.h"
////#include "/Users/omar/Desktop/programs/stdc++.h"
//#include <QTimer>
//#include "enemy.h"
//#define ROW 15
//#define COL 15
//#include "win.h"

//// Creating a shortcut for int, int pair type
//typedef std::pair<int, int> Pair;

//// Creating a shortcut for pair<int, pair<int, int>> type
//typedef std::pair<double, std::pair<int, int> > pPair;

//// A structure to hold the necessary parameters
//struct cell {
//    // Row and Column index of its parent
//    // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
//    int parent_i, parent_j;
//    // f = g + h
//    double f, g, h;
//};

//class GraphEnemy: public QObject, public QGraphicsPixmapItem
//{
//    Q_OBJECT
//    QString name;
//private:
//int data[15][15];
//Player *ptr;
//std::stack<Pair> Pathfinal;
//bool right=false,left=false,up=false,down=false;
//bool collide = false;
//bool Switch = false;
//public:
//    int health;

//    bool alive = true;
//    GraphEnemy(int [15][15], Player *, int, int, QString);
//    bool isValid(int row, int col);
//    bool isUnBlocked(int grid[][COL], int row, int col);
//    bool isDestination(int row, int col, Pair dest);
//    double calculateHValue(int row, int col, Pair dest);
//    void tracePath(cell cellDetails[][COL], Pair dest);
//    void aStarSearch(int grid[][COL], Pair src, Pair dest);
//    QTimer* timer;
//    QTimer* Astar;
//    QTimer *shootT;
//    QTimer *col;
//    QTimer* Enemies;
//    void myTimer();
//    int row;
//    int column;
//    Pellet *p;
//public slots:
//    void move();
//    void AStar();
//    void shoot();
//    void collision();
//    void spawn();
//};
//#endif // PLAYER_H
