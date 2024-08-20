# Adding in neovim

To use this grammar in neovim, you will need to use [`nvim-treesitter`](https://github.com/nvim-treesitter/nvim-treesitter) plugin.

```lua
-- Custom filetype for the locale files
vim.filetype.add({
    pattern = {
        ['.*/locale/.*/.*%.cfg'] = 'factorio-locale'
    }
})

local parser_configs = require("nvim-treesitter.parsers").get_parser_configs()

-- Define a parser config
parser_configs.factorio_locale = {
    install_info = {
        url = "https://github.com/JohnTheCoolingFan/tree-sitter-factorio-locale.git",
        files = { "src/parser.c" },
        generate_requires_npm = false,
    },
    filetype = "factorio-locale",
}
```

More information on setting up additional parsers can be found in `nvim-treesitter` README: https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#adding-parsers
