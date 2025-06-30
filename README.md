# Suckless

![Preview](https://github.com/zistro/Suckless-zistro/blob/main/dwm-preview.png)

These are my custom builds of suckless apps.

## Dwm

### Installing 
You'll probably need imlib2 to build.

I am too lazy to list all the dependency check the error messages.

Go to dwm folder make and install then copy dwm.desktop file in xsessions folder so
that your display manager can use it launch dwm.

```
cd dwm
make
sudo make install
sudo cp dwm.desktop /usr/share/xsessions/
sudo chmod +x /usr/share/xsessions/dwm.desktop
```

### Autostarting
To autostart programs like feh[for wallpaper], dunst[for notification] etc
You will need to create .dwm folder in your home directory and
add an autostart.sh example one will be given in dwm folder.

```
mkdir .dwm
cp autostart.sh ~/.dwm/
```

### Used patches

I patched in this order

1. autostart
2. fullgaps
3. status2d-withsystay
4. alt-tags
5. rainbowtags
6. underline tags
7. alwayscenter
8. actual fullscreen
9. steam
10. movestack
11. no title

## St

### Installing
It probably also needs imlib2 and might need zlib idk.

Goto st folder then make and make install.

```
cd st
make
sudo make install
```

### Used patches

* st-boxdraw
* st-columnredraw
* st-disable-bold-italic
* st-kitty-graphics
* st-scrollback

### Dmenu
Just go to dmenu folder and make then make install.

I just added `dmenu-caseinsensitive` patch into it.

```
cd dmenu
make
sudo make install
```

### Dwmblocks
Yes it is not a suckless software but is needed for dwm.

It will use some scripts so add the script folder to your path

Goto dwmblocks folder, make and make install.

```
cd dwmblocks
make
sudo make install
```








