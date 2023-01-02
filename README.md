# conversion-select

This project is inspired by [im-select](https://github.com/daipeihust/im-select), and its motivation is also for solving a vim key bindind issue with non-alphabetic languages.

Currently, this is for windows users and IMEs that support multiple languages.

For example, Koreans type Korean and English with the same IME in Windows 11, and all keyboards being sold in Korea has a key to toggle eng/kor without changing the keyboard layout. So, changing IME via im-select is insufficient solution for us.

Internally, Changing the input language without changing IME is done by modifying the conversion status of IME, and conversion-select does a similar thing to im-select in this way.

You can use this with the following extensions or plugins.

- [VSCodeVim](https://github.com/VSCodeVim/Vim)
- [vim-im-select-obsidian](https://github.com/ALONELUR/vim-im-select-obsidian)
