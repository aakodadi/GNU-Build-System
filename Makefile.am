bin_PROGRAMS = hello
hello_SOURCES = main.c

lib_SOURCES = \
  lib.c

TESTS = \
  foo_test \
  foo_xfail_test \
  foo_skipped_test

XFAIL_TESTS = \
  foo_xfail_test

check_PROGRAMS = \
  $(TESTS)

foo_test_SOURCES = \
  foo_test.c \
  $(lib_SOURCES)

foo_xfail_test_SOURCES = \
  foo_xfail_test.c \
  $(lib_SOURCES)

foo_skipped_test_SOURCES = \
  foo_skipped_test.c \
  $(lib_SOURCES)