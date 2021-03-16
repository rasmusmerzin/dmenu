static int topbar = 1;
static const char *fonts[] = {
	"Fira Code:size=8",
	"Twemoji:size=8",
};
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
	[SchemeNorm] = { "#ffffff", "#222222" },
	[SchemeSel] = { "#ffffff", "#444444" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
static unsigned int lines = 0;
static const char worddelimiters[] = " ";
