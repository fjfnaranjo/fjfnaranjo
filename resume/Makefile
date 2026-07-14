PODMAN_CMD_BASE=podman run --rm --volume ".:/host" -w /host
PODMAN_WEASYPRINT=$(PODMAN_CMD_BASE) minidocks/weasyprint
PODMAN_PANDOC=$(PODMAN_CMD_BASE) pandoc/minimal

MD := $(wildcard *.md)
HTML = $(MD:.md=.html)
PDF = $(MD:.md=.pdf)
DOCX = $(MD:.md=.docx)

.PHONY: all
all: $(HTML) $(PDF) $(DOCX)

.PHONY: clean
clean:
	@rm -f $(HTML) $(PDF) $(DOCX)

%.html: %.md
	@$(PODMAN_PANDOC) --standalone --include-in-header chmduquesne.css \
		--lua-filter=pdc-links-target-blank.lua --from markdown --to html \
		--metadata pagetitle=$(basename $@) --output $@ $<

%.pdf: %.html
	@$(PODMAN_WEASYPRINT) $< $@

%.docx: %.md
	@$(PODMAN_PANDOC) --standalone -f markdown+smart --output $@ $<
