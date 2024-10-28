-----------------------------------

_DISCLAIMER:_

Welcome to the **raylib gamejam template**!

This template provides a base structure to start developing a small raylib game in plain C for any of the proposed **raylib gamejams**!

Please, considering the following usual gamejam restrictions: 

 - Game must be made with raylib
 - Game must be compiled for web
 - _Specific gamejam restrictions if defined_
 
NOTE: Several GitHub Actions workflows have been preconfigured to automatically build your game for Windows, Linux and WebAssembly on each commit. Those workflows automatically sync with latest version of raylib available to build.

The repo is also pre-configured with a default `LICENSE` (zlib/libpng) and a `README.md` (this one) to be properly filled by users. Feel free to change the LICENSE as required.

All the sections defined by `$(Data to Fill)` are expected to be edited and filled properly. It's recommended to delete this disclaimer message after editing this `README.md` file.

_GETTING STARTED:_

First press the 'Use this template' button to clone the repo.

This template does not include a copy of raylib itself. By default it expects to find raylib in the same folder as the one to which you've cloned this template. To start using this template with raylib 5.0, you can do the following:

```sh
mkdir ~/raylib-gamejam && cd ~/raylib-gamejam
git clone --depth 1 --branch 5.0 https://github.com/raysan5/raylib
make -C raylib/src
git clone https://github.com/$(User Name)/$(Repo Name).git
cd $(Repo Name)
make -C src
src/raylib_game
```

This template has been created to be used with raylib (www.raylib.com) and it's licensed under an unmodified zlib/libpng license.

_Copyright (c) 2022-2024 Ramon Santamaria ([@raysan5](https://twitter.com/raysan5))_

-----------------------------------

## D.A. Braithwaite

### Description

You are a 1950's detective agent, David Braithwaite. You are tasked with solving various crimes around Manhattan, from petty theft to homicide. Interview suspects, take photos of evidence, and connect the dots to find the culprit!

### Features

#### Minimum Viable Product
- [ ] Title Screen
- [ ] Suspect Interviews
- [ ] Evidence Collecting on Scene
- [ ] Pinboard (Join evidence with string, not cliche I swear!)
- [ ] Put him behind bars!

#### Extras
- [ ] More cases?
- [ ] Voice Acting
- [ ] Better art :3

### Controls

Click or tap!

### Screenshots

```rust
let screenshots = todo!();
```

### Developers

Just me, Alexis!

### Links

```rust
let links = todo!();
```

### License

This project sources are licensed under an unmodified zlib/libpng license, which is an OSI-certified, BSD-like license that allows static linking with closed source software. Check [LICENSE](LICENSE) for further details.

*Copyright (c) 2024 Alexis Williams (💻 abstralexis)*
