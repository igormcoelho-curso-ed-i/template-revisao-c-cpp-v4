# revisao-c-cpp

*Aquecimento C/C++ - Estruturas de Dados I - Prof. Igor Machado Coelho*

## Nome do Aluno

**Nome:** *TODO - Atualize seu nome neste README*

## Descrição do Problema

A lista de exercícios de **Aquecimento C/C++** está disponível no repositório: [Atividade.pdf](./descricao/Atividade.pdf)

## Objetivo

- Fazer com o que o código passe corretamente por todos os testes
   * altere os arquivos necessários para esse fim (observe as instruções abaixo com as regras específicas).

- O GitHub Actions deverá apresentar um marcador verde quanto todos testes forem satisfeitos, e X vermelho quando alguns (ou todos) testes falharem. 
    * **Dica:** Você pode clicar no X vermelho para verificar quais testes falharam (ou se o código não compilou corretamente).

## Instruções


- Você deve alterar APENAS os arquivos `include/revisao-c-cpp/aluno.hpp` e `README.md`!
   * Coloque suas implementações, e no `README.md` coloque o seu nome completo.
   * NÃO ALTERE CABEÇALHO DE FUNÇÕES, SOMENTE SEU CORPO
   * Os padrão C++20 será considerado na atividade (C puro também é aceito pelo compilador de C++)

Explicações sobre os demais arquivos:

- o arquivo `tests/teste.cpp` contém os testes necessários para a lista de exercícios (NÃO EDITE!)
- o arquivo `tests/thirdparty/catch_amalgamated.hpp` contém a biblioteca de testes CATCH2 (NÃO EDITE!)
- o arquivo `makefile` contém os comandos de execução da lista (NÃO EDITE!)
- o arquivo `CMakeLists.txt` contém os comandos de execução da lista (NÃO EDITE!)
- o arquivo `appTeste` será gerado após compilação (caso queira fazer testes localmente, basta executá-lo)

## Comando de Testes

- Comando para construir e executar os testes: `make test`
   * será necessário suporte a C/C++ para executar todos exercícios
   * Se já estiver construído, basta executar: `./appTeste`

## Notas

- O código receberá nota apenas se estiver compilando! 
   * A razão disso é que, caso não compile, não será possível gerar o executável nem validar nenhum teste.

- Alguns casos de teste poderão receber nota individual, enquanto outros poderão receber nota somente se um conjunto maior de testes (ou todos!) passarem corretamente.

- A nota final será dada automaticamente a cada *commit*, e somente será considerada a última alteração no código dentro do tempo limite da atividade.

- O tempo limite de entrega da atividade está definido no GitHub Classroom
   * caso não consiga encontrar, verifique na publicação da atividade na página do curso

Verifique as demais regras com o professor/monitor.

## Licença

MIT License 2022
