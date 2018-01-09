#include <Wt/WApplication.h>
#include <Wt/WBreak.h>
#include <Wt/WContainerWidget.h>
#include <Wt/WLineEdit.h>
#include <Wt/WPushButton.h>

class HelloApplication: public Wt::WApplication
{
public:
    HelloApplication(const Wt::wEnvironment& env);

private:
    Wt::WLineEdit *nameEdit_;
    Wt::WText     *greeting_;

    void greet();
};
