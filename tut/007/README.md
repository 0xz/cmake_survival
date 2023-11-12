
## Create release static library and link it to executable with ccache

- ccache helps reuse previous compilation objects if they do not have changes


See: https://ccache.dev/performance.html

Notes:

Initial build with ccache is usually slightly slower than without ccache,
However, builds thereafter can be sped up quite a bit.
