#include <QCoreApplication>
#include <vector>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<int> v1 = {1,2,2 };
    for (auto i=0;i<3;i++) qDebug()<< v1[i];
    qDebug() << "----------------";
    ////vector<int> *p;
    auto p=v1.begin();
    auto ss=adjacent_find(v1.begin(),v1.end());
    qDebug()<<*ss;
    return a.exec();
}
