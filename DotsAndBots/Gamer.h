#ifndef GAMER_H
#define GAMER_H


class Gamer{
public:
    explicit Gamer(QColor);
    virtual ~Gamer();
private:
    int pontos;
    QColor m_color;
public slots:
    QColor getColor();
};

#endif // GAMER_H
