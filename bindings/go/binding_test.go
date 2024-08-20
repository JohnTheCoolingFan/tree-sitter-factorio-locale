package tree_sitter_factorio_locale_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-factorio_locale"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_factorio_locale.Language())
	if language == nil {
		t.Errorf("Error loading FactorioLocale grammar")
	}
}
