# minimal_l18n
Learning how to some localisation

## Essence
This is a synthesis between the
[meson](https://mesonbuild.com/i18n-module.html)
[docs](https://mesonbuild.com/Localisation.html) and this
[question](https://stackoverflow.com/questions/1003360/complete-c-i18n-gettext-hello-world-example)
on stack overflow and this
[wiki](https://fedoraproject.org/wiki/How_to_do_I18N_through_gettext) page from
the fedora project and the
[gnome builder](https://gitlab.gnome.org/GNOME/gnome-builder) project.

I personally found the documentation at the
[GNU.org](https://www.gnu.org/software/gettext/manual/html_node/index.html)
page kind of unbearable and hard and barely usable as reference material.
However I do recommend the introduction part to get an overview of the goals
and purposes of every part that is coded here.
It's most certainly not appropriate for a quick tutorial.

I have chosen to use the meson build system because it's the one used with the
gnome project, and the whole thing started because I want to re-develop an
application and give it a UI based on gtk40.
I know that they use glib/gI18n.h but it is fairly similar. Also main matter to
be dealt with here wasn't the c code, which will be cpp in the application,
but rather the installation of said files, and such

## Usage

``` bash
#to generate the main pot file use
meson compile {{project name}}-pot [-C {{build directory}}]
#to generate the main po files use
meson compile {{project name}}-update-po [-C {{build directory}}]
#to compile po files w/o installation
meson compile {{project name}}-gmo [-C {{build directory}}]
#to install install translations
meson install [-C {{build directory}}]
```


## Future

This ended up being much easier than the GNU documentation made it look and
much harder than what I expected.
Please do create an issue if it doesn't work for you.
I most likely won't know how to fix it, but if you find a fix we can end up
building a good resource for people stuck in the same hole as us.


<small>
And yes I do perceive the irony of this README being only in English when I
am Spanish and it's an internationalisation and localisation project.
Maybe another day.
</small>
