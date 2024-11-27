FROM ubuntu:24.04

RUN apt-get update -y
RUN apt-get install -y build-essential cmake gcc curl git clang-format-18 clang-format-12
RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y
 
WORKDIR /app


