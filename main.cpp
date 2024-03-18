#include <QCoreApplication>
#include <vector>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<int> v1 = {1,2,10,-15 };
    for (auto i=0;i<3;i++) qDebug()<< v1[i];
    qDebug() << "----------------";
    ////vector<int> *p;
    auto p=v1.begin();
    auto ss=adjacent_find(v1.begin(),v1.end());
    auto ss1=min_element(v1.begin(),v1.end());
    qDebug()<<*ss1;
    return a.exec();
}
