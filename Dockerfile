FROM ubuntu:22.04

RUN apt-get update -y
RUN apt-get install -y build-essential cmake gcc curl git
RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y

WORKDIR /project


