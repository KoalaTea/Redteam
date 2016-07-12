#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -f seapplet 
#endif

static  char data [] = 
#define      xecc_z	15
#define      xecc	((&data[1]))
	"\010\111\350\172\131\026\214\350\012\036\011\235\376\252\221\113"
	"\162\366"
#define      lsto_z	1
#define      lsto	((&data[18]))
	"\305"
#define      chk1_z	22
#define      chk1	((&data[20]))
	"\374\370\332\335\117\164\074\210\030\234\110\252\214\027\316\050"
	"\350\113\023\052\173\142\217\342"
#define      msg2_z	19
#define      msg2	((&data[47]))
	"\340\034\132\107\311\322\266\243\134\033\060\111\232\213\002\207"
	"\044\100\123\003\240\006\170"
#define      msg1_z	42
#define      msg1	((&data[72]))
	"\223\072\012\072\071\070\320\062\041\310\307\265\114\132\313\153"
	"\000\020\211\147\061\072\162\362\263\102\007\325\112\171\344\316"
	"\121\030\315\130\306\176\333\371\252\232\150\332\141\275\010\317"
	"\166\233\264\031"
#define      rlax_z	1
#define      rlax	((&data[118]))
	"\122"
#define      date_z	1
#define      date	((&data[119]))
	"\200"
#define      opts_z	1
#define      opts	((&data[120]))
	"\313"
#define      text_z	179
#define      text	((&data[155]))
	"\174\317\360\231\051\070\254\276\237\077\370\252\172\062\342\361"
	"\315\226\012\162\275\032\213\127\120\062\070\314\324\374\333\121"
	"\313\313\302\330\362\017\042\170\253\330\206\063\104\251\017\041"
	"\035\146\007\257\257\065\234\264\001\340\273\100\130\151\166\307"
	"\154\331\056\210\361\052\140\210\066\224\022\131\055\206\110\042"
	"\053\321\002\357\126\004\054\365\247\025\142\320\272\363\170\351"
	"\345\370\207\364\266\162\255\240\111\263\254\077\076\327\231\330"
	"\307\242\266\271\266\322\076\314\150\151\063\044\064\305\351\033"
	"\215\357\272\054\173\253\213\150\056\246\067\045\137\334\010\352"
	"\121\105\366\304\125\113\374\336\160\324\236\207\327\342\222\067"
	"\200\100\324\376\246\045\144\110\204\174\305\206\114\140\146\024"
	"\232\030\106\113\022\336\100\147\271\063\134\274\177\070\347\266"
	"\354\340\137\035\131\117\066\141\260\057\022\202\365\225\146\237"
	"\353\013\311\106\142\353\365"
#define      pswd_z	256
#define      pswd	((&data[374]))
	"\243\327\255\115\121\337\057\102\255\306\115\037\203\147\253\333"
	"\267\335\024\203\262\020\137\004\334\053\360\322\057\207\206\322"
	"\136\063\040\260\022\120\024\215\254\134\144\326\247\272\057\160"
	"\137\145\315\056\357\223\120\255\063\334\127\177\152\207\263\342"
	"\214\205\260\310\140\305\125\015\042\272\343\311\165\022\072\324"
	"\170\010\002\150\233\123\025\316\060\155\116\233\365\002\175\201"
	"\207\056\111\347\364\237\364\026\132\330\340\317\353\033\244\143"
	"\043\247\313\276\372\341\215\053\117\333\306\104\335\104\306\144"
	"\162\020\114\147\257\100\175\012\031\136\331\004\171\176\147\235"
	"\045\063\133\040\024\350\113\143\304\021\250\242\125\156\007\310"
	"\176\123\057\056\224\255\070\255\014\022\261\205\220\031\043\265"
	"\114\176\325\141\147\041\305\054\062\155\316\210\334\325\121\132"
	"\051\200\211\275\055\301\153\071\324\035\277\144\067\342\032\204"
	"\141\357\345\311\020\252\365\103\030\304\314\364\232\035\117\303"
	"\235\330\201\313\232\355\005\156\012\305\322\102\250\354\306\011"
	"\334\253\322\355\126\310\061\157\214\375\143\046\032\263\352\270"
	"\213\153\204\046\131\211\224\143\116\147\245\366\123\154\000\060"
	"\030\323\035\157\233\117\336\050\114\102\117\147\365\071\037\201"
	"\245\243\247\376\055\073\363\300\026\100\337\231\247\213\165\136"
	"\151\211\342\033\232\102\040\166\155\020\111\234\230\320\157\366"
	"\004\217\247\026\337\232\326\366\332\266\220\201\101\005\340\252"
	"\216\303\306"
#define      shll_z	10
#define      shll	((&data[675]))
	"\076\343\374\021\066\356\330\014\311\311\240\162"
#define      chk2_z	19
#define      chk2	((&data[691]))
	"\217\271\177\206\005\244\231\117\247\210\344\365\145\202\164\076"
	"\366\116\067\051\072\156\340"
#define      tst2_z	19
#define      tst2	((&data[710]))
	"\324\027\044\304\165\302\000\121\163\252\067\333\276\350\146\146"
	"\144\370\126"
#define      inlo_z	3
#define      inlo	((&data[729]))
	"\301\353\246"
#define      tst1_z	22
#define      tst1	((&data[737]))
	"\142\165\044\244\173\043\304\116\203\062\367\007\337\320\257\252"
	"\344\010\140\357\202\311\127\163\025\057\024\005\116\012"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
