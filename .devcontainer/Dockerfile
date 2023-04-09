FROM mcr.microsoft.com/devcontainers/cpp:0-ubuntu-22.04
# LIST: https://mcr.microsoft.com/v2/vscode/devcontainers/cpp/tags/list

# install pip (for cpplint and cmake)
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends python3-pip

# RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends cmake 
RUN pip install --upgrade cmake

# command 'add-apt-repository'
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends software-properties-common

# gcc-12
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends g++-12 gcc-12

# clangd, clang-format and clang-tidy (standard)
#RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends clang-tidy clang-format clangd

# clang-16
RUN wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key | sudo apt-key add -
RUN echo "deb http://apt.llvm.org/jammy/ llvm-toolchain-jammy-16 main" >> /etc/apt/sources.list
RUN echo "deb-src http://apt.llvm.org/jammy/ llvm-toolchain-jammy-16 main" >> /etc/apt/sources.list

# clangd, clang-format and clang-tidy
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends clang-tidy-16 clang-format-16 clangd-16

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends  lldb-16  lld-16 libc++-16-dev libc++abi-16-dev

# =========== https://apt.llvm.org/ (Extras) ============
# LLVM
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends  libllvm-16-ocaml-dev libllvm16 llvm-16 llvm-16-dev llvm-16-doc llvm-16-examples llvm-16-runtime

# clang
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends clang-16 clang-tools-16 clang-16-doc libclang-common-16-dev libclang-16-dev libclang1-16 clang-format-16 python3-clang-16 clangd-16 clang-tidy-16

# ===========

# nodejs (for bazel)
RUN curl -sL https://deb.nodesource.com/setup_18.x | sudo -E bash -
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends nodejs 

# bazel
RUN npm install -g @bazel/bazelisk

# install cpplint into /usr/local/bin/cpplint
RUN pip install cpplint 

# bumpver (for versioning)
RUN python3 -m pip install bumpver

# default gcc-12
RUN sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 10
RUN sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 10
# default clang-16
RUN sudo update-alternatives --install /usr/bin/clang clang /usr/bin/clang-16 10
RUN sudo update-alternatives --install /usr/bin/clang-format clang-format /usr/bin/clang-format-16 10
RUN sudo update-alternatives --install /usr/bin/clangd clangd /usr/bin/clangd-16 10
RUN sudo update-alternatives --install /usr/bin/clang-tidy clang-tidy /usr/bin/clang-tidy-16 10
