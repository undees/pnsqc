!SLIDE transition=fade subsection

# Document Misfits #

.notes We've just talked about a project whose "welcome mat" document
helped new users acclimate.  What about projects that aren't so
blessed?  What kinds of things have gone wrong on projects you've
seen?

!SLIDE transition=fade center

# Invisible Ink #

![Invisible Ink](invisible.jpg)

.notes The first thing that can go wrong, of course, is no
documentation at all.

!SLIDE transition=fade center

# Ghost Writer #

![Ghost Writer](ghost.jpg)

.notes The second is relying solely on documents generated
automatically from source code.

!SLIDE transition=fade

<p style="font-size: 400%;">Auto-generated documentation is worse than
useless: it lets maintainers fool themselves into thinking they have
documentation, thus putting off actually writing good reference by
hand.</p>

### Jacob Kaplan-Moss ###

.notes Kaplan-Moss is particularly tough on this kind of
documentation, and with good reason.  Just to pick on one of my
favorite languages: a lot of Ruby projects link straight from the home
page to a sea of class definitions with no information on what each
class is for or where to start.

!SLIDE transition=fade

	@@@ruby
	# Implements the Halt-O-Meter.
	#
	class HaltOMeter
	  # Runs the Halt-O-Meter.
	  #
	  def run(context, source, language)
	  end
	end

.notes Consider this example.  The source comments don't tell us
anything we couldn't have gotten from the class and method names.
Worse, they don't tell us what these parameters mean.

!SLIDE transition=fade center

![Result](ghost-result.png)

.notes And the result is a beautiful HTML page (complete with
validation link) with no content.  The fix is twofold: write enough in
the source comments for a reader to know how to use your class, and
provide an overview telling him where to start.  Both of these
solutions are manual; even if you're generating docs automatically,
you still need to do some writing yourself.

!SLIDE transition=fade center

## One Document to Rule Them All ##

![Rule Them All](ring.jpg)

.notes At the other end of the spectrum, we have
overdocumentation.  I've seen people throw a sea of inscrutable
architecture diagrams and outdated requirements documents into a
central binder, far away from the source code.  These can be useful as
a historical record, but they're seldom helpful when it's actually
time to write software.

!SLIDE transition=fade center

# Ancient Scrolls #

![Scroll](scroll.jpg)

.notes Documents go out of date, especially ones that are kept in a
central stash that no one remembers to look in.  Sometimes the text is
all right, but the source examples go out of date.  Later, we'll see
examples of how to keep your example code tested and updated.
