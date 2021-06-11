# SOWM

Sowm is an itsy bitsy floating window manager .

Official repo : [sowm](https://github.com/dylanaraps/sowm/)

### This fork of SOWM aka sowm-voidz contains the following features

<a href="https://raw.githubusercontent.com/voidz7/sowm/main/screenshots/rice.png"><img src="https://raw.githubusercontent.com/voidz7/sowm/main/screenshots/rice.png" width="43%" align="right"></a>

* VIM keybinds to move resize windows
* Window borders for active and inactive windows 
* autostart script 
* bar support (todo)
* out of the box rice (dracula theme)
* simple code base so easily hackable/customizable


#### refer [screenshots](https://github.com/voidz7/sowm/tree/main/screenshots) for more  
## Default Keybindings

**Window Management**

| combo                      | action                 |
| -------------------------- | -----------------------|
| `Mouse`                    | focus under cursor     |
| `MOD4` + `Left Mouse`      | move window            |
| `MOD4` + `Right Mouse`     | resize window          |
| `MOD4` + `f`               | maximize toggle        |
| `MOD4` + `c`               | center window          |
| `MOD4` + `q`               | kill window            |
| `MOD4` + `1-6`             | desktop swap           |
| `MOD4` + `Shift` +`1-6`    | send window to desktop |
| `MOD1` + `TAB` (*alt-tab*) | focus cycle            |
| `MOD4` + `hjkl`            | Move window            |
| `MOD4` + `Shift` + `hjkl`  | resize window          |


**Programs**

| combo                    | action           | program        |
| ------------------------ | ---------------- | -------------- |
| `MOD4` + `Return`        | terminal         | `st`           |
| `MOD4` + `d`             | dmenu            | `dmenu_run`    |
| `MOD4` + `p`             | Screenshot       | `scr`          |
| `XF86_AudioLowerVolume`  | volume down      | `amixer`       |
| `XF86_AudioRaiseVolume`  | volume up        | `amixer`       |
| `XF86_AudioMute`         | volume toggle    | `amixer`       |
| `XF86_MonBrightnessUp`   | brightness up    | `bri`          |
| `XF86_MonBrightnessDown` | brightness down  | `bri`          |


## Dependencies

- `xlib` (*usually `libX11`*).
