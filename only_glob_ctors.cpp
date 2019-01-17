#include <iostream>
struct Foo {
  Foo() { std::cerr << "Foo()" << std::endl; }
};

static Foo f;
