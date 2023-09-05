A repository about argument count and argument vector
Up until now, the skeletons we have used for our C programs have looked something like this:

#include <stdio.h>

int main()
{

  return 0;
}

From now on, our examples may look a bit more like this:

#include <stdio.h>

int main (int argc, char *argv[])
{

  return 0;
}
