// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho

#pragma once

// C includes
//
// helpers
#include <fmt/core.h>
#include <scn/scn.h>
// C++ includes
#include <iostream>
#include <string>
#include <tuple>  // para exercícios com tupla
// favor não remover exemplos
#include <revisao-c-cpp/exemplo.hpp>
//

using fmt::print;
using scn::scan;

// exercício 0
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exercicio0(std::string entrada) {
  // SOLUCAO: modifique o return 1 para return 0
  return 1;
  // return 0;
}

// resolução exercício 1 (verifique se está correto)
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exercicio1(std::string entrada) {
  int a = 0;
  int b = 0;
  [[maybe_unused]] auto resto = scan(entrada, "{} {}", a, b);
  int soma = 0;
  for (int i = a; i <= b; i++) soma += i;
  return soma;
}

// =======================  falta fazer ============================

// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exercicio2(std::string entrada) {
  // Edite aqui dentro, somente. Leia todos os dados da string 'entrada'
  return 0;
}

// dica: retorna uma tupla com 4 elementos (veja slides com std::make_tuple)
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
auto exercicio3(std::string entrada) {
  // Edite aqui dentro, somente. Leia todos os dados da string 'entrada'
  return std::make_tuple(0.0, 0.0, 0.0, 0.0);
}

// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exercicio4(std::string entrada) {
  // Edite aqui dentro, somente. Leia todos os dados da string 'entrada'
  return 0;
}

// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exercicio5(std::string entrada) {
  // Edite aqui dentro, somente. Leia todos os dados da string 'entrada'
  return 0;
}

// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
int exercicio6(std::string entrada) {
  // Edite aqui dentro, somente. Leia todos os dados da string 'entrada'
  return 0;
}

// dica: retorno de 'char', não 'int'
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
char exercicio7(std::string entrada) {
  // Edite aqui dentro, somente. Leia todos os dados da string 'entrada'
  return 'A';
}

// dica: retorna uma tupla com 2 elementos (veja slides com std::make_tuple)
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
auto exercicio8(std::string entrada) {
  // Edite aqui dentro, somente. Leia todos os dados da string 'entrada'. Leia
  // todos os dados a partir da string 'entrada'
  return std::make_tuple(0, 0);
}

// dica: retorno de 'float', não 'int'
// NAO APAGUE OU MODIFIQUE O CABEÇALHO DA FUNÇÃO ABAIXO
float exercicio9(std::string entrada) {
  // Edite aqui dentro, somente. Leia todos os dados da string 'entrada'
  return 0.0;
}
