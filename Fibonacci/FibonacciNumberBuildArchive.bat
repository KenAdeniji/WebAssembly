@echo off
emcc FibonacciNumber.c FibonacciHelper.c -o FibonacciNumber.js -O3 -s WASM=1 --shell-file ../html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1  -s "EXPORTED_RUNTIME_METHODS=['ccall']" || exit 1
REM emrun --port 8080 .
REM emrun --port 8080 FibonacciNumber.html