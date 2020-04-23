reading_log_sources = [
  'main.c',
  'reading_log-window.c',
]

reading_log_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

reading_log_sources += gnome.compile_resources('reading_log-resources',
  'main.gresource.xml',
  c_name: 'reading_log'
)

executable('reading-log', reading_log_sources,
  dependencies: reading_log_deps,
  install: true,
)
