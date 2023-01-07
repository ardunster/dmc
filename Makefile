help:
	@echo "Run `make build` to execute build scripts, then `make dmc` to run the software."
	@echo "After building, you can also use `make test` to run the test-only executable."

build:
	@echo "Running build scripts..."
	cmake src/ -B build
	cmake --build build
	@echo "Build complete."

dmc:
	./build/dmc

test:
	./build/dmc_test
