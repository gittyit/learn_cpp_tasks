# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-src"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-build"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-subbuild/curl-populate-prefix"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-subbuild/curl-populate-prefix/tmp"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-subbuild/curl-populate-prefix/src/curl-populate-stamp"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-subbuild/curl-populate-prefix/src"
  "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-subbuild/curl-populate-prefix/src/curl-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-subbuild/curl-populate-prefix/src/curl-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/uhuj/skillbox_cpp/learn_cpp_tasks/out/build/GCC 12.2.0 x86_64-linux-gnu/_deps/curl-subbuild/curl-populate-prefix/src/curl-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
