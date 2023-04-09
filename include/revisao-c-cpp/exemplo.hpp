// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho

#pragma once

// C includes
#include <fmt/core.h>
#include <scn/scn.h>
#include <stdio.h>

// C++ includes
#include <iostream>
#include <sstream>  // istringstream
#include <string>
#include <tuple>  // para exercícios com tupla

using fmt::print;
using scn::scan;

// exemplo útil (em C):
// ler N numeros e retornar a soma desses números
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exemplo_c(std::string _entrada) {
  const char* entrada = _entrada.c_str();
  int n, count;

  sscanf(entrada, "%d%n", &n, &count);
  entrada += count;

  int s = 0;
  while (n--) {
    int v = 0;

    sscanf(entrada, "%d%n", &v, &count);
    entrada += count;

    s += v;
  }
  return s;
}

// exemplo útil (em C++):
// ler N numeros e retornar a soma desses números
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exemplo_cpp(std::string entrada) {
  int n = 0;
  // requer #include<sstream>
  std::istringstream meu_cin{entrada};
  meu_cin >> n;

  int s = 0;
  while (n--) {
    int v = 0;
    meu_cin >> v;
    s += v;
  }
  return s;
}

// exemplo útil (em C++ com 'scan'):
// ler N numeros e retornar a soma desses números
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exemplo_cpp_scan(std::string entrada) {
  int n = 0;
  auto resto = scan(entrada, "{}", n);

  int soma = 0;
  while (n--) {
    int v = 0;
    resto = scan(resto.range(), "{}", v);
    soma += v;
  }
  return soma;
}
