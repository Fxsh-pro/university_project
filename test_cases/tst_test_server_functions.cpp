#include <QtTest>
#include "../university_project_server/h/functions.h"


// add necessary includes here

class test_server_functions : public QObject
{
    Q_OBJECT

public:
    test_server_functions();
    ~test_server_functions();

private slots:
    void test_case1();

};

test_server_functions::test_server_functions()
{

}

test_server_functions::~test_server_functions()
{

}

void test_server_functions::test_case1()
{
    QVERIFY(log_in("admin", "Admin123!!!!!!!") == "auth-\r\n");
    QVERIFY(add_new_access("Отдел планирования") == "add_access-");
}

QTEST_APPLESS_MAIN(test_server_functions)

#include "tst_test_server_functions.moc"
