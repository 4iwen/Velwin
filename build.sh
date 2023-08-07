rm -rf build
mkdir build
cd build
cmake -DBUILD_SANDBOX=ON ..
cmake --build . --config Release