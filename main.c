#include<stdio.h>
#include<libintl.h>
#include<locale.h>
#define _(String) gettext (String)

int main(int argc, char **argv) {
    setlocale(LC_ALL,"");
    bindtextdomain("main","./build/po");
    textdomain("main");
    printf(_("Hello\n"));
    printf(_("He\n"));
    printf(_("Hello World\n"));
    return 0;
}
