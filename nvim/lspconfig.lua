local on_attach = require("plugins.configs.lspconfig").on_attach
local capabilities = require("plugins.configs.lspconfig").capabilities

local lspconfig = require("lspconfig")

lspconfig.ccls.setup({
  on_attach = on_attach,
  capabilities = capabilities,
  filetypes = {"c", "cpp"},
  init_options = {
    compilationDatabaseDirectory = "build",
    index = {
      threads = 0,
    },
  },
})

return {
  on_attach = on_attach,
  capabilities = capabilities,
}

