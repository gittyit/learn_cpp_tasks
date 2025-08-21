# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-src"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-build"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-subbuild/libpsl_src-populate-prefix"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-subbuild/libpsl_src-populate-prefix/tmp"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-subbuild/libpsl_src-populate-prefix/src/libpsl_src-populate-stamp"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-subbuild/libpsl_src-populate-prefix/src"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-subbuild/libpsl_src-populate-prefix/src/libpsl_src-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-subbuild/libpsl_src-populate-prefix/src/libpsl_src-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/Clang 17.0.6 x86_64-pc-linux-gnu/_deps/libpsl_src-subbuild/libpsl_src-populate-prefix/src/libpsl_src-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
