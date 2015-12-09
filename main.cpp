#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include "testopenquestionmenudialog.h"
#pragma GCC diagnostic pop

int main(int argc, char *argv[])
{
  const std::vector<std::string> args { ribi::MenuDialog::ConvertArguments(argc,argv) };
  ribi::TestOpenQuestionMenuDialog d;
  return d.Execute(args);
}

