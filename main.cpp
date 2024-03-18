#include <QCoreApplication>
#include <vector>
#include <QDebug>

using namespace std;
void PrintArray(vector<int> v1)
{
    for (int i=0;i<v1.size();i++) qDebug()<< v1[i];

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<int> v1 = {1,2,10,-15 };
 //   for (int i=0;i<v1.size();i++) qDebug()<< v1[i];
    PrintArray(v1);
    qDebug() << "----------------";
    ////vector<int> *p;
//    auto p=v1.begin();
    auto ss=adjacent_find(v1.begin(),v1.end());
    auto ss1=min_element(v1.begin(),v1.end());
    qDebug()<<*ss1;
    sort(v1.begin(),v1.end());
    PrintArray(v1);

    return a.exec();
}
