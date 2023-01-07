help:
	@echo "Run `make build` to execute build scripts, then `make dmc` to run the software."
	@echo "After building, you can also use `make test` to run the test-only executable."

build: clean
	@echo "Running build scripts..."
	cmake dmc/ -B build
	cmake --build build
	@echo "Build complete."

dmc:
	./build/dmc

test: build
	./build/dmc_test

clean:
	cmake -E remove_directory ./build

.PHONY: build dmc
