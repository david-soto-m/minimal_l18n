i18n = import('i18n')

# define GETTEXT_PACKAGE

add_project_arguments('-DGETTEXT_PACKAGE="intltest"',language: 'c')

i18n.gettext(meson.project_name(),
    args: '--directory=' + meson.source_root(),
    install_dir: locale_dir,
    install: true,
)
