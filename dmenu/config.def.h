/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* Catppucin mocha theme */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cdd6f4", "#1e1e2e" },
	[SchemeSel] = { "#1e1e2e", "#94E2D5" },
	[SchemeOut] = { "#000000", "#94E2D5" },
};

// /* Catppucin latte theme */
// static const char *colors[SchemeLast][2] = {
// 	/*     fg         bg       */
// 	[SchemeNorm] = { "#4c4f69", "#eff1f5" },
// 	[SchemeSel] = { "#4c4f69", "#04a5e5" },
// 	[SchemeOut] = { "#000000", "#04a5e5" },
// };

// /* Default dmenu color scheme */
// static const char *colors[SchemeLast][2] = {
// 	/*     fg         bg       */
// 	[SchemeNorm] = { "#bbbbbb", "#222222" },
// 	[SchemeSel] = { "#eeeeee", "#005577" },
// 	[SchemeOut] = { "#000000", "#00ffff" },
// };

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
