#include <ostream>

#include "dreal/dreal.h"

namespace dreal {
namespace {

using std::cout;
using std::endl;

// Checks the delta-satisfiability of formula `f`.
//
// Note that we do have this function in `dreal/api/api.h` file. We
// have this implementation here just to show how to use dReal APIs.
optional<Box> CheckSatisfiability(const Formula& f, const double delta) {
  Config config;
  config.mutable_precision() = delta;
  Context context{config};
  for (const Variable& v : f.GetFreeVariables()) {
    context.DeclareVariable(v);
  }
  context.Assert(f);
  return context.CheckSat();
}

void sat_checker_main() {
  const Variable x{"x"};
  const Formula f = (0 <= x) && (x <= 3.141592) && (sin(x) >= 0.99);
  optional<Box> result = CheckSatisfiability(f, 0.001);
  if (result) {
    cout << f << " is delta-sat:\n" << *result << endl;
  } else {
    cout << f << " is unsat." << endl;
  }
}

}  // namespace
}  // namespace dreal

int main() { dreal::sat_checker_main(); }
