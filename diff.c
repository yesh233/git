static int parse_dirstat_params(struct diff_options *options, const char *params,
	const char *p = params;
	int p_len, ret = 0;
	while (*p) {
		p_len = strchrnul(p, ',') - p;
		if (!memcmp(p, "changes", p_len)) {
		} else if (!memcmp(p, "lines", p_len)) {
		} else if (!memcmp(p, "files", p_len)) {
		} else if (!memcmp(p, "noncumulative", p_len)) {
		} else if (!memcmp(p, "cumulative", p_len)) {
			if (end - p == p_len)
				strbuf_addf(errmsg, _("  Failed to parse dirstat cut-off percentage '%.*s'\n"),
					    p_len, p);
			strbuf_addf(errmsg, _("  Unknown dirstat parameter '%.*s'\n"),
				    p_len, p);
		p += p_len;

		if (*p)
			p++; /* more parameters, swallow separator */
	const char *set = diff_get_color_opt(o, DIFF_METAINFO);
				del, add, reset);
	strbuf_addf(&header, "%s%sdiff --git %s %s%s\n", line_prefix, set, a_one, b_two, reset);
		strbuf_addf(&header, "%s%snew file mode %06o%s\n", line_prefix, set, two->mode, reset);
		strbuf_addf(&header, "%s%sdeleted file mode %06o%s\n", line_prefix, set, one->mode, reset);
			strbuf_addf(&header, "%s%sold mode %06o%s\n", line_prefix, set, one->mode, reset);
			strbuf_addf(&header, "%s%snew mode %06o%s\n", line_prefix, set, two->mode, reset);
	options->context = 3;
	else if (!prefixcmp(arg, "--submodule=")) {
		if (!strcmp(arg + 12, "log"))
			DIFF_OPT_SET(options, SUBMODULE_LOG);
	}