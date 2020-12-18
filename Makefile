gcc_options = -std=c++17 -fopenmp -Wall --pedantic-error
vcpkg_include = /opt/vcpkg/installed/x64-linux/include

compile:
	g++ $(gcc_options) -I $(vcpkg_include) -I $(MKLROOT)/include -L $(MKLROOT)/lib/intel64 ./src/$(TARGET).cpp -lmkl_intel_lp64 -lmkl_core -lmkl_gnu_thread -lpthread -lm -ldl -o ./bin/$(TARGET)

run:
	./bin/$(TARGET)

clean:
	rm ./bin/*