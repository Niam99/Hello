#include "HelloApplication.hpp"



HelloApplication::HelloApplication(const Wt::WEnvironment& env)
  : WApplication(env)
{
  setTitle("Hello world");                            // application title

  root()->addWidget(Wt::cpp14::make_unique<Wt::WText>("Enter numbers you wish to add:  ")); // show some text

  nameEdit_ = root()->addWidget(Wt::cpp14::make_unique<Wt::WLineEdit>()); // allow text input
  nameEdit_->setFocus();                              // give focus
  auto button = root()->addWidget(Wt::cpp14::make_unique<Wt::WPushButton>("ADD"));
                                                      // create a button
  button->setMargin(5, Wt::Side::Left);                   // add 5 pixels margin

  root()->addWidget(Wt::cpp14::make_unique<Wt::WBreak>());    // insert a line break
  greeting_ = root()->addWidget(Wt::cpp14::make_unique<Wt::WText>()); // empty text

  /*
   * Connect signals with slots
   *
   * - simple Wt-way: specify object and method
   */
  button->clicked().connect(this, &HelloApplication::greet);

  /*
   * - using an arbitrary function object, e.g. useful to bind
   *   values with std::bind() to the resulting method call
   */
  nameEdit_->enterPressed().connect(std::bind(&HelloApplication::greet, this));

  /*
   * - using a lambda:
   */
  button->clicked().connect([=]() {
          std::cerr << "Hi, " << nameEdit_->text() << "." << std::endl;
  });
}

void HelloApplication::greet()
{
    int ans = std::stoi(nameEdit_->text());
    sum += ans;
    greeting_->setText("The total is " +  std::to_string(sum) + ".");
}
