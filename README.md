
** In current folder

Run:
1.   . aliases.sh
2.  build_dev_container
3.  run_dev_container

docker build -t dev --progress=plain .
docker run -it  -v $PWD:/project dev


