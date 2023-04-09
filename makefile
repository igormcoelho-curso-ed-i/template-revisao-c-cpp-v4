all: vendor manual cmake_ninja run

FMT_DIR=external/fmt-9.1.0
SCN_DIR=external/scn-1.1.2
INCLUDES=-I$(FMT_DIR)/include -I$(SCN_DIR)/include -I$(SCN_DIR)/src -I$(SCN_DIR)/src/deps/fast_float/single_include -Iinclude
DEFINES=-DHEADER_ONLY -DFMT_HEADER_ONLY -DSCN_HEADER_ONLY # -DSCN_LOCALE_CPP

#CC_CUSTOM=clang++-16 -stdlib=libc++ -lc++abi
#CC_CUSTOM=clang++-16 -stdlib=libc++ --std=c++2b
CC_CUSTOM=g++ --std=c++20

cmake_ninja:
	@echo ""
	@echo "BEGIN CMAKE BUILD"
	@echo ""
	mkdir -p build
	cd build && cmake .. -GNinja && ninja
	
manual: src/main.cpp
	$(CC_CUSTOM) -Ofast -Wall $(INCLUDES) $(DEFINES) src/main.cpp -o aplicacao
	echo "FINISHED MAKE BUILD!"

run:
	./build/aplicacao
	./aplicacao

test: tests/teste.cpp
	$(CC_CUSTOM) -Ofast -Wall $(INCLUDES) $(DEFINES) tests/teste.cpp -Itests/thirdparty tests/thirdparty/catch2/catch_amalgamated.cpp -o appTeste
	echo "FINISHED MAKE BUILD TESTS!"
	

vendor:
	git init
	mkdir -p external
	git submodule add https://github.com/fmtlib/fmt.git $(FMT_DIR) || true
	git submodule add https://github.com/eliaskosunen/scnlib.git $(SCN_DIR) || true
	git submodule update --remote 
	(cd $(FMT_DIR) && git checkout 9.1.0)
	(cd $(SCN_DIR) && git checkout v1.1.2)
	