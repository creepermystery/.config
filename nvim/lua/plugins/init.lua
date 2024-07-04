return {
  {
    "stevearc/conform.nvim",
    -- event = 'BufWritePre', -- uncomment for format on save
    config = function()
      require "configs.conform"
    end,
  },

  -- These are some examples, uncomment them if you want to see them work!
  {
    "neovim/nvim-lspconfig",
    config = function()
      require("nvchad.configs.lspconfig").defaults()
      require "configs.lspconfig"
    end,
  },
  
  {
  	"williamboman/mason.nvim",
  	opts = {
  		ensure_installed = {
  			"lua-language-server",
        "stylua",
  			"html-lsp",
        "css-lsp",
        "prettier",
        "rust-analyzer",
        "clangd",
        "clang-format",
  		},
  	},
  },
  
  {
    "rust-lang/rust.vim",
    ft = "rust",
  },
  -- {
  --   "jose-elias-alvarez/null-ls.nvim",
  --   event = "VeryLazy",
  --   opts = function()
  --     return require "configs.null-ls"
  --   end,
  -- },
  --  
  -- {
  -- 	"nvim-treesitter/nvim-treesitter",
  -- 	opts = {
  -- 		ensure_installed = {
  -- 			"vim", "lua", "vimdoc",
  --      "html", "css"
  -- 		},
  -- 	},
  -- },
}
