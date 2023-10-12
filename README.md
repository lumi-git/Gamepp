# Gamepp
game library on c++


## Run Test manualy
```bash
mkdir build
cd ./build
cmake ../Boost_tests/CMakeLists.txt
make
./Boost_Tests_run
```

## Run Example manualy:
```bash
mkdir build
cd ./build
cmake ../CMakeLists.txt
make
./Gamepp
```

## Run Tests with docker
```bash
docker build .  -t run_tests
```