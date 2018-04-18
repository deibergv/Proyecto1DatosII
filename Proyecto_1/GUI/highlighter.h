//
// Created by deiber on 4/6/18.
//

#ifndef PROYECTO_1_HIGHLIGHTER_H
#define PROYECTO_1_HIGHLIGHTER_H

#include <QSyntaxHighlighter>
#include <QTextCharFormat>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
class QTextDocument;
QT_END_NAMESPACE

class Highlighter : public QSyntaxHighlighter
{
Q_OBJECT

public:
    Highlighter(QTextDocument *parent = 0);
protected:
    void highlightBlock(const QString &text) override;
private:
    struct HighlightingRule
    {
        QRegularExpression pattern;
        QTextCharFormat format;
    };
    QVector<HighlightingRule> highlightingRules;
    QRegularExpression commentStartExpression;
    QRegularExpression commentEndExpression;
    QTextCharFormat keywordFormat;
    QTextCharFormat classFormat;
    QTextCharFormat singleLineCommentFormat;
    QTextCharFormat multiLineCommentFormat;
    QTextCharFormat quotationFormat;
    QTextCharFormat curlyFormat;
    QTextCharFormat functionFormat;
    QTextCharFormat parentesisFormat;
    QTextCharFormat numberFormat;
};

#endif //PROYECTO_1_HIGHLIGHTER_H
