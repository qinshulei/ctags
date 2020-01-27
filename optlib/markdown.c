/*
 * Generated by ./misc/optlib2c from optlib/markdown.ctags, Don't edit this manually.
 */
#include "general.h"
#include "parse.h"
#include "routines.h"
#include "field.h"
#include "xtag.h"


typedef enum {
	K_CHAPTER,
	K_SECTION,
	K_SUBSECTION,
	K_SUBSUBSECTION,
	K_L4SUBSECTION,
	K_L5SUBSECTION,
} MarkdownKind;


static void initializeMarkdownParser (const langType language)
{

	addLanguageRegexTable (language, "main");
	addLanguageRegexTable (language, "chapter");
	addLanguageRegexTable (language, "section");
	addLanguageRegexTable (language, "subsection");
	addLanguageRegexTable (language, "subsubsection");
	addLanguageRegexTable (language, "l4subsection");
	addLanguageRegexTable (language, "l5subsection");
	addLanguageRegexTable (language, "rest");
	addLanguageRegexTable (language, "code");
	addLanguageRegexTable (language, "codeblockBacktick");
	addLanguageRegexTable (language, "codeblockTildes");

	addLanguageTagMultiTableRegex (language, "main",
	                               "^#[ \t]+([^\n]+)([ \t]+#+)[\n]",
	                               "\\1", "c", "{_field=sectionMarker:##}{scope=push}{tenter=chapter}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^#[ \t]+([^\n]+)[\n]",
	                               "\\1", "c", "{_field=sectionMarker:#}{scope=push}{tenter=chapter}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^([^\n]+)[\n]=+[\n]",
	                               "\\1", "c", "{_field=sectionMarker:=}{scope=push}{tenter=chapter}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^[ \t]*~~~~*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^~\n]*[\n]",
	                               "", "", "{tenter=codeblockTildes}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^[ \t]*````*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^`\n]*[\n]",
	                               "", "", "{tenter=codeblockBacktick}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "main",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^##[ \t]+([^\n]+)([ \t]+#+)[\n]",
	                               "\\1", "s", "{_field=sectionMarker:##}{scope=push}{tenter=section}", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^##[ \t]+([^\n]+)[\n]",
	                               "\\1", "s", "{_field=sectionMarker:#}{scope=push}{tenter=section}", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^([^\n]+)[\n]-+[\n]",
	                               "\\1", "s", "{_field=sectionMarker:-}{scope=push}{tenter=section}", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^#[ \t]+([^\n]+)",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^([^\n]+)[\n]=+[\n]",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^[ \t]*~~~~*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^~\n]*[\n]",
	                               "", "", "{tenter=codeblockTildes}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^[ \t]*````*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^`\n]*[\n]",
	                               "", "", "{tenter=codeblockBacktick}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "chapter",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^###[ \t]+([^\n]+)([ \t]+#+)[\n]",
	                               "\\1", "S", "{_field=sectionMarker:##}{scope=push}{tenter=subsection}", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^###[ \t]+([^\n]+)[\n]",
	                               "\\1", "S", "{_field=sectionMarker:#}{scope=push}{tenter=subsection}", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^#{1,2}[ \t]+([^\n]+)",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^([^\n]+)[\n](=+|-+)[\n]",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^[ \t]*~~~~*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^~\n]*[\n]",
	                               "", "", "{tenter=codeblockTildes}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^[ \t]*````*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^`\n]*[\n]",
	                               "", "", "{tenter=codeblockBacktick}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "section",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^####[ \t]+([^\n]+)([ \t]+#+)[\n]",
	                               "\\1", "t", "{_field=sectionMarker:##}{scope=push}{tenter=subsubsection}", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^####[ \t]+([^\n]+)[\n]",
	                               "\\1", "t", "{_field=sectionMarker:#}{scope=push}{tenter=subsubsection}", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^#{1,3}[ \t]+([^\n]+)",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^([^\n]+)[\n](=+|-+)[\n]",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^[ \t]*~~~~*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^~\n]*[\n]",
	                               "", "", "{tenter=codeblockTildes}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^[ \t]*````*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^`\n]*[\n]",
	                               "", "", "{tenter=codeblockBacktick}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "subsection",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^#####[ \t]+([^\n]+)([ \t]+#+)[\n]",
	                               "\\1", "T", "{_field=sectionMarker:##}{scope=push}{tenter=l4subsection}", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^#####[ \t]+([^\n]+)[\n]",
	                               "\\1", "T", "{_field=sectionMarker:#}{scope=push}{tenter=l4subsection}", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^#{1,4}[ \t]+([^\n]+)",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^([^\n]+)[\n](=+|-+)[\n]",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^[ \t]*~~~~*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^~\n]*[\n]",
	                               "", "", "{tenter=codeblockTildes}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^[ \t]*````*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^`\n]*[\n]",
	                               "", "", "{tenter=codeblockBacktick}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "subsubsection",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^######[ \t]+([^\n]+)([ \t]+#+)[\n]",
	                               "\\1", "u", "{_field=sectionMarker:##}{scope=push}{tenter=l5subsection}", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^######[ \t]+([^\n]+)[\n]",
	                               "\\1", "u", "{_field=sectionMarker:#}{scope=push}{tenter=l5subsection}", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^#{1,5}[ \t]+([^\n]+)",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^([^\n]+)[\n](=+|-+)[\n]",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^[ \t]*~~~~*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^~\n]*[\n]",
	                               "", "", "{tenter=codeblockTildes}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^[ \t]*````*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^`\n]*[\n]",
	                               "", "", "{tenter=codeblockBacktick}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "l4subsection",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "l5subsection",
	                               "^#{1,6}[ \t]+([^\n]+)",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "l5subsection",
	                               "^([^\n]+)[\n](=+|-+)[\n]",
	                               "", "", "{scope=pop}{tleave}{_advanceTo=0start}", NULL);
	addLanguageTagMultiTableRegex (language, "l5subsection",
	                               "^[ \t]*~~~~*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^~\n]*[\n]",
	                               "", "", "{tenter=codeblockTildes}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "l5subsection",
	                               "^[ \t]*````*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^`\n]*[\n]",
	                               "", "", "{tenter=codeblockBacktick}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "l5subsection",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "l5subsection",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "l5subsection",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "rest",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "rest",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "rest",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "code",
	                               "^[ \t]*~~~~*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^~\n]*[\n]",
	                               "", "", "{tenter=codeblockTildes}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "code",
	                               "^[ \t]*````*([a-zA-Z0-9][-#+a-zA-Z0-9]*)?[^`\n]*[\n]",
	                               "", "", "{tenter=codeblockBacktick}{_guest=\\1,0end,}", NULL);
	addLanguageTagMultiTableRegex (language, "codeblockBacktick",
	                               "^[ \t]*````*[ \t]*[\n]",
	                               "", "", "{tleave}{_guest=,,0start}", NULL);
	addLanguageTagMultiTableRegex (language, "codeblockBacktick",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "codeblockBacktick",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "codeblockBacktick",
	                               "^[^\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "codeblockTildes",
	                               "^[ \t]*~~~~*[ \t]*[\n]",
	                               "", "", "{tleave}{_guest=,,0start}", NULL);
	addLanguageTagMultiTableRegex (language, "codeblockTildes",
	                               "^[^\n]+[\n]",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "codeblockTildes",
	                               "^[\n]+",
	                               "", "", "", NULL);
	addLanguageTagMultiTableRegex (language, "codeblockTildes",
	                               "^[^\n]+",
	                               "", "", "", NULL);
}

extern parserDefinition* MarkdownParser (void)
{
	static const char *const extensions [] = {
		"md",
		"markdown",
		NULL
	};

	static const char *const aliases [] = {
		NULL
	};

	static const char *const patterns [] = {
		NULL
	};

	static kindDefinition MarkdownKindTable [] = {
		{
		  true, 'c', "chapter", "chapsters",
		},
		{
		  true, 's', "section", "sections",
		},
		{
		  true, 'S', "subsection", "subsections",
		},
		{
		  true, 't', "subsubsection", "subsubsections",
		},
		{
		  true, 'T', "l4subsection", "level 4 subsections",
		},
		{
		  true, 'u', "l5subsection", "level 5 subsections",
		},
	};
	static fieldDefinition MarkdownFieldTable [] = {
		{
		  .enabled     = false,
		  .name        = "sectionMarker",
		  .description = "character used for declaring section(#, ##, =, or -)",
		},
	};

	parserDefinition* const def = parserNew ("Markdown");

	def->enabled       = true;
	def->extensions    = extensions;
	def->patterns      = patterns;
	def->aliases       = aliases;
	def->method        = METHOD_NOT_CRAFTED|METHOD_REGEX;
	def->useCork       = 1;
	def->kindTable     = MarkdownKindTable;
	def->kindCount     = ARRAY_SIZE(MarkdownKindTable);
	def->fieldTable    = MarkdownFieldTable;
	def->fieldCount    = ARRAY_SIZE(MarkdownFieldTable);
	def->defaultScopeSeparator = "\"";
	def->initialize    = initializeMarkdownParser;

	return def;
}
