#
# show defines which are enabled with -march=native flag versus just -O3 flag
# requires python3.7 or newer
#


import subprocess


def diff_lists(a, b):
    for i in b:
        if i not in a:
            print(i)


def run_bash(s):
    return subprocess.run(s, shell=True, capture_output=True)


def _try_diff(c):
    try:
        a = run_bash(f"echo | {c} -dM -E -x c++ -O3 -")
        b = run_bash(f"echo | {c} -dM -E -x c++ -march=native -")
        diff_lists(
            sorted(str(a.stdout).split("\\n")),
            sorted(str(b.stdout).split("\\n")),
        )
    except Exception as e:
        print("Exception: ", e)


def main():
    print("try gcc")
    _try_diff("g++")
    print("\n\ntry clang")
    _try_diff("clang++")


if __name__ == "__main__":
    main()
