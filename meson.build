project('miniI18n','c')

source = 'main.c'


config_h = configuration_data()

install_dir = join_paths(get_option('prefix'),'bin')

locale_dir = join_paths(get_option('prefix'),get_option('datadir'),'locale')

config_h.set_quoted('GETTEXT_PACKAGE', meson.project_name())
config_h.set_quoted('LOCALEDIR', locale_dir)

configure_file(output: 'config.h', configuration: config_h)

config_include = include_directories('.')

subdir('po')

executable(
    meson.project_name(),
    source,
    include_directories: [config_include,],
    install_dir: install_dir,
    install: true,
)
