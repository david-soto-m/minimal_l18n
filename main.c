#include<stdio.h>
#include<libintl.h>
#include<locale.h>
#include<config.h>
#define _(String) gettext (String)

int main(int argc, char **argv) {
    setlocale(LC_ALL,"");
    bindtextdomain(GETTEXT_PACKAGE,LOCALEDIR);
    textdomain(GETTEXT_PACKAGE);
    printf(_("Hello\n"));
    printf(_("Hemoglobin\n"));
    printf(_("Hello World\n"));
    return 0;
}
