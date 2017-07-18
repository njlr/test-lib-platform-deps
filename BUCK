include_defs('//BUCKAROO_DEPS')

# prebuilt_cxx_library(
#   name = 'test-lib-platform-deps',
#   header_namespace = 'test-lib-platform-deps',
#   header_only = True,
#   exported_headers = subdir_glob([
#     ('', '*.hpp'),
#   ]),
#   deps = BUCKAROO_DEPS,
#   platform_deps = BUCKAROO_PLATFORM_DEPS,
# )

cxx_library(
  name = 'test-lib-platform-deps',
  header_namespace = 'test-lib-platform-deps',
  exported_headers = subdir_glob([
    ('', '*.hpp'),
  ]),
  deps = BUCKAROO_DEPS,
  platform_deps = BUCKAROO_PLATFORM_DEPS,
  visibility = [
    'PUBLIC',
  ],
)

cxx_binary(
  name = 'main',
  srcs = [
    'main.cpp',
  ],
  deps = [
    ':test-lib-platform-deps',
  ],
)
