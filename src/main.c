#include<config.h>

#include<translations.h>
#include<printers.h>

int main(int argc, char **argv) {
    setlocale(LC_ALL,"");
    bindtextdomain(GETTEXT_PACKAGE,LOCALEDIR);
    textdomain(GETTEXT_PACKAGE);
    print_1();
    print_2();
    print_3();
    printf(_("Tony Stark\n"));
    return 0;
}
