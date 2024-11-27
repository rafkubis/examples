#! /bin/bash

alias build_dev_container='docker build -t dev .'
alias run_dev_container='docker run -it -v $(pwd):/app dev'