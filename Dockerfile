FROM alpine:3.18.4

RUN apk --update add --no-cache \
  build-base \
  boost boost-dev\
  cmake

COPY . .

WORKDIR build/
RUN cmake ../Boost_tests/CMakeLists.txt
RUN cmake --version
RUN make
RUN ./Boost_Tests_run