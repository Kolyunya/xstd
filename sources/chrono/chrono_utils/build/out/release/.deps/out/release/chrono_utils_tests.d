cmd_out/release/chrono_utils_tests := flock out/release/linker.lock g++ -lpthread  -o out/release/chrono_utils_tests -Wl,--start-group out/release/obj.target/chrono_utils_tests/../tests/sources/chrono_utils.o /home/kolyunya/projects/gtest/build/gtest-all.o out/release/obj.target/libchrono_utils.a -Wl,--end-group 