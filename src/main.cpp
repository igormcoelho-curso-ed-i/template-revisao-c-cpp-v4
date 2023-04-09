// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho
#include <memory>
//
#include <fmt/core.h>  // NOLINT
//
#include <revisao-c-cpp/aluno.hpp>
#include <revisao-c-cpp/exemplo.hpp>

using fmt::print;

int main() {
  print("exercicio1(\"1 3\")={}\n", exercicio1("1 3"));
  print("exemplo_cpp_scan(\"3 1 2 3\")={}\n", exemplo_cpp_scan("3 1 2 3"));

  return 0;
}

// Ctrl+Shift+P
// CMake: build
// CMake: configure
// CMake: debug
// [aplicacao]
