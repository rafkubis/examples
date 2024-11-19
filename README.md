
** In current pwd

docker build -t dev --progress=plain .
docker run -it  -v $PWD:/project dev


