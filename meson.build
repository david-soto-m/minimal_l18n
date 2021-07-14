project(
    'miniI18n',
    'c',
    version:'1.0.0',
    license: 'Unlicence',
)

sources = []


install_dir = join_paths(get_option('prefix'),'bin')
locale_dir = join_paths(get_option('prefix'),get_option('datadir'),'locale')


config_h = configuration_data()
config_h.set_quoted('GETTEXT_PACKAGE', meson.project_name())
config_h.set_quoted('LOCALEDIR', locale_dir)
configure_file(output: 'config.h', configuration: config_h)


config_include = include_directories('.')
inc = include_directories('include')

subdir('po')

subdir('src')

executable(
    meson.project_name(),
    sources,
    include_directories: [config_include,inc],
    install_dir: install_dir,
    install: true,
)
