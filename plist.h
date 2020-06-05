#ifndef PLIST_H
#define PLIST_H

#include <QXmlStreamReader>

class PList
{
public:
    PList();

    bool read(QIODevice *device);
    const QList<QVariant> data() const;

    QString errorString() const;

private:
    void readPList();
    void readArray(QList<QVariant> &array);
    void readDict(QList<QVariant> &array);
    void readKey(QMap<QString, QVariant> &dict);

private:
    QXmlStreamReader	m_xmlReader;
    QList<QVariant>		m_data;
};

#endif // PLIST_H
