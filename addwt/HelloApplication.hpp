#include <Wt/WApplication.h>
#include <Wt/WBreak.h>
#include <Wt/WContainerWidget.h>
#include <Wt/WLineEdit.h>
#include <Wt/WPushButton.h>
#include <Wt/WText.h>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::sort;
using std::cout;
using std::streamsize;
using std::endl;
using std::string;
using std::setprecision;
using std::vector;
using std::stoi;
;

class HelloApplication: public Wt::WApplication
{
public:
    HelloApplication(const Wt::WEnvironment& env);
private:
    Wt::WLineEdit *nameEdit_;
    Wt::WText     *greeting_;
    int count = 0;
    int sum = 0;
    void greet();
};
