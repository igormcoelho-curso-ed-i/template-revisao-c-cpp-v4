// SPDX-License-Identifier:  MIT
// Copyright (C) 2023 - Prof. Igor Machado Coelho

// Definições de teste. Não edite esse arquivo!

#include <tuple>
//
// #define CATCH_CONFIG_MAIN  // define main() automaticamente
#ifdef HEADER_ONLY
#include <catch2/catch_amalgamated.hpp>
#else
#include <catch2/catch_all.hpp>
#endif
//
#include <revisao-c-cpp/aluno.hpp>  // implementações do aluno
#include <revisao-c-cpp/exemplo.hpp>

template <class T1, class T2>
std::ostream& operator<<(std::ostream& os, const std::tuple<T1>& t) {
  os << "tuple(I):(" << std::get<0>(t) << ")";
  return os;
}

template <class T1, class T2>
std::ostream& operator<<(std::ostream& os, const std::tuple<T1, T2>& t) {
  os << "tuple(II):(" << std::get<0>(t) << ";" << std::get<1>(t) << ")";
  return os;
}

template <class T1, class T2, class T3>
std::ostream& operator<<(std::ostream& os, const std::tuple<T1, T2, T3>& t) {
  os << "tuple(III):(" << std::get<0>(t) << ";" << std::get<1>(t) << ";"
     << std::get<2>(t) << ")";
  return os;
}

template <class T1, class T2, class T3, class T4>
std::ostream& operator<<(std::ostream& os,
                         const std::tuple<T1, T2, T3, T4>& t) {
  os << "tuple(IV):(" << std::get<0>(t) << ";" << std::get<1>(t) << ";"
     << std::get<2>(t) << ";" << std::get<3>(t) << ")";
  return os;
}
// =======================
// testes para exercício 0
// -----------------------

TEST_CASE("Ex0", "[aquecimento]") { REQUIRE(exercicio0("") == 0); }

// =======================
// testes para exercício 1
// -----------------------

TEST_CASE("Ex1", "[aquecimento]") {
  REQUIRE(exercicio1("1 3") == 6);
  REQUIRE(exercicio1("1 10") == 55);
}

// ===================
// testes para exemplo
// -------------------

TEST_CASE("Ex0 exemplo n=3 3 2 5", "[aquecimento]") {
  // 3 + 2 + 5 = 10
  REQUIRE(exemplo_c("\t3     3    2 \n\t 5") == 10);
  REQUIRE(exemplo_cpp("\t3     3    2 \n\t 5") == 10);
  REQUIRE(exemplo_cpp_scan("\t3     3    2 \n\t 5") == 10);
}

// testado com Catch v2.13.1
// mais testes virão aqui no futuro...

TEST_CASE("Ex2", "[aquecimento]") {
  REQUIRE(exercicio2("4 1 1 2 3") == 1);
  REQUIRE(exercicio2("3 1 2 3") == 0);
}

TEST_CASE("Ex3", "[aquecimento]") {
  std::tuple<double, double, double, double> t1;
  std::tuple<double, double, double, double> t2;
  //
  t1 = std::make_tuple(20.0, 5.0, 10.0, 1.5);
  t2 = exercicio3("4 5.0 10.0 1.5 3.5");

  if (!(t1 == t2)) {
    // mensagem de erro amigável
    std::cout << "ERRO: Ex3 espera " << t1 << " mas obteve " << t2 << std::endl;
  }
  // check
  REQUIRE(t1 == t2);

  t1 = std::make_tuple(0.0, 0.0, 1.0, -1.0);
  t2 = exercicio3("2 1.0 -1.0");

  if (!(t1 == t2)) {
    // mensagem de erro amigável
    std::cout << "ERRO: Ex3 espera " << t1 << " mas obteve " << t2 << std::endl;
  }

  // check
  REQUIRE(t1 == t2);
}

TEST_CASE("Ex4", "[aquecimento]") {
  REQUIRE(exercicio4("6\n"
                     "8.0 Carla\n"
                     "9.0 Marcos\n"
                     "1.0 José\n"
                     "9.9 Rita\n"
                     "5.0 Luiz\n"
                     "7.0 Maria\n"
                     "2") == 1);
  REQUIRE(exercicio4("2\n"
                     "3.0 A\n"
                     "9.0 B\n"
                     "1") == 0);
  REQUIRE(exercicio4("2\n"
                     "3.0 A\n"
                     "9.0 B\n"
                     "2") == 1);
}

TEST_CASE("Ex5", "[aquecimento]") { REQUIRE(exercicio5("4") == 24); }

TEST_CASE("Ex6", "[aquecimento]") { REQUIRE(exercicio6("4") == 3); }

TEST_CASE("Ex7", "[aquecimento]") {
  REQUIRE(exercicio7("3\n"
                     "t p\n"
                     "d p\n"
                     "d t") == 'M');
}

TEST_CASE("Ex8", "[aquecimento]") {
  std::tuple<int, int> t1 = std::make_tuple(20, 10);
  std::tuple<int, int> t2 = exercicio8("10 20");

  if (!(t1 == t2)) {
    // mensagem de erro amigável
    std::cout << "ERRO: Ex8 espera " << t1 << " mas obteve " << t2 << std::endl;
  }
  REQUIRE(t1 == t2);
}

TEST_CASE("Ex9", "[aquecimento]") { REQUIRE(exercicio9("5 8 3 6 1 4") == 4.0); }
