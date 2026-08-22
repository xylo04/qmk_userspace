# QMK Userspace

This is my personal QMK playground for experimenting with keymaps, features, and modules outside the
[main QMK repository](https://github.com/qmk/qmk_firmware). It contains the firmware configurations
I use for my keyboards and may change whenever I find a new idea to try.

## Setup

After completing the standard [`qmk setup`](https://docs.qmk.fm/#/newbs), clone this repository and
configure it as the userspace overlay:

```sh
cd qmk_userspace
git submodule update --init --recursive
qmk config user.overlay_dir="$(realpath .)"
```

## Build

Build every target listed in `qmk.json`:

```sh
qmk userspace-compile
```

Or build a single keymap:

```sh
qmk compile -kb <keyboard> -km xylo04
```

Pushing changes also runs the GitHub Actions workflow and publishes the resulting firmware to the
repository's Releases page.

## Build targets

Manage the targets in `qmk.json` with:

```sh
qmk userspace-list
qmk userspace-add -kb <keyboard> -km <keymap>
qmk userspace-remove -kb <keyboard> -km <keymap>
```

The QMK repository and revision used by GitHub Actions are configured in
`.github/workflows/build_binaries.yaml`.
