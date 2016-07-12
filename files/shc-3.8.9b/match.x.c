#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -T -f match 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\315"
#define      chk1_z	22
#define      chk1	((&data[3]))
	"\331\210\051\143\356\152\006\260\047\201\277\010\114\230\306\167"
	"\041\337\346\226\126\373\156\367"
#define      text_z	337
#define      text	((&data[88]))
	"\162\003\240\337\232\304\274\171\076\001\111\301\135\070\004\312"
	"\152\126\156\353\010\343\307\227\070\320\160\300\241\057\221\023"
	"\062\062\363\315\367\257\106\065\261\220\367\016\311\374\330\063"
	"\122\106\036\132\051\346\362\142\266\142\043\127\222\265\153\233"
	"\105\233\001\226\356\050\074\123\207\136\047\221\064\035\232\332"
	"\034\155\053\374\246\226\060\224\332\117\326\033\243\217\053\144"
	"\277\013\301\225\212\362\214\336\061\225\126\322\124\361\075\322"
	"\303\274\126\377\266\320\275\304\022\146\167\153\103\123\301\220"
	"\145\267\072\014\230\112\034\103\133\153\020\144\114\251\234\060"
	"\352\136\074\141\155\215\263\314\315\211\305\333\306\217\364\346"
	"\330\242\056\301\300\302\246\044\267\155\373\247\123\025\260\153"
	"\046\154\146\074\166\161\232\037\067\254\370\316\107\303\136\113"
	"\343\254\155\233\102\257\344\042\233\221\257\222\077\240\312\114"
	"\172\325\141\047\211\264\236\020\277\135\140\310\337\034\014\106"
	"\134\320\316\026\120\311\301\021\215\007\156\237\255\254\233\165"
	"\210\306\145\254\123\150\072\000\115\034\027\350\004\351\063\164"
	"\253\320\231\141\025\201\153\300\355\147\366\377\035\365\147\206"
	"\104\217\313\103\127\377\266\362\101\027\014\342\027\065\023\312"
	"\135\027\062\031\242\133\235\130\354\021\376\201\204\220\011\023"
	"\027\333\242\371\304\273\057\065\112\056\202\121\217\112\010\246"
	"\162\151\231\007\015\336\231\040\033\154\311\333\357\034\071\320"
	"\073\111\163\350\101\342\020\344\223\075\342\165\025\011\057\160"
	"\013\075\032\255\070\207\044\012\253\225\046\357\125\064\045\103"
	"\050\304\200\364\174\234\355\354\346\323\076\307\230\166\357\360"
	"\130\373\373\247\251\343\242\256\104\150\225\147\324\204\011\172"
	"\305\347\136\222\336\016\331\024\277\151\014\315\063\010\246\146"
	"\132\354\205\265\026\153\247\171\041\012\234\171\235\121\344\142"
	"\071\103\365\030\121\316\055\021\070\071\336\153\102\204\322\235"
	"\161\130\122\207\303\372\000\345\004\235\136\242\357\103\004\050"
	"\206\372\101\330\311"
#define      lsto_z	1
#define      lsto	((&data[494]))
	"\144"
#define      msg2_z	19
#define      msg2	((&data[498]))
	"\352\114\100\316\171\115\245\047\037\144\166\335\267\024\134\163"
	"\160\032\042\003\153\366\207\276"
#define      opts_z	1
#define      opts	((&data[519]))
	"\174"
#define      xecc_z	15
#define      xecc	((&data[523]))
	"\101\331\344\376\066\153\365\243\021\317\377\377\363\044\234\102"
	"\045\117\240"
#define      tst1_z	22
#define      tst1	((&data[543]))
	"\200\374\152\173\245\370\311\373\126\374\325\150\077\052\213\221"
	"\207\325\314\162\232\103\031\240\073\167\076\103\104\255\055"
#define      inlo_z	3
#define      inlo	((&data[570]))
	"\200\132\274"
#define      tst2_z	19
#define      tst2	((&data[574]))
	"\364\025\151\113\012\123\246\235\264\126\176\264\277\140\126\070"
	"\375\176\364\253\310"
#define      pswd_z	256
#define      pswd	((&data[629]))
	"\106\351\166\215\053\120\161\313\314\105\257\114\101\031\307\177"
	"\135\014\054\212\122\202\177\007\302\302\374\212\302\211\055\011"
	"\163\244\226\322\253\005\175\330\140\360\364\024\315\210\376\273"
	"\004\317\360\073\352\316\167\003\342\056\174\145\023\154\254\063"
	"\323\302\005\176\310\202\126\050\162\113\074\077\324\073\373\330"
	"\013\354\024\366\273\214\371\235\272\165\002\316\342\256\001\266"
	"\161\006\064\072\211\213\142\373\326\237\073\252\333\067\203\346"
	"\043\230\334\337\044\326\174\337\114\177\256\057\056\257\345\237"
	"\266\032\331\077\245\074\073\174\334\166\047\270\256\253\236\322"
	"\103\173\261\150\122\055\110\237\254\366\316\332\246\264\172\135"
	"\316\124\234\164\221\330\360\156\116\030\046\375\303\304\317\007"
	"\100\200\160\222\256\270\061\132\257\000\065\125\264\260\263\203"
	"\004\117\367\226\047\350\004\166\000\052\163\304\357\103\313\057"
	"\303\073\302\161\364\364\314\243\364\002\371\251\262\254\054\267"
	"\374\044\115\044\014\122\233\014\174\017\320\154\122\234\234\025"
	"\327\136\207\314\122\123\157\107\126\151\361\010\025\036\300\021"
	"\102\016\066\116\140\321\133\335\340\054\111\062\310\345\110\240"
	"\104\317\154\227\043\334\336\172\105\320\202\133\356\103\155\061"
	"\121\243\200\237\364\010\153\300\115\032\015\217\064\325\017\221"
	"\342\073\033\064\276\233\074\201\136\070\013\040\302\071\051\066"
	"\335\300\325\322\310\100\222\026\133\240\245\217"
#define      chk2_z	19
#define      chk2	((&data[929]))
	"\130\360\075\300\032\010\063\240\054\157\160\375\150\053\067\031"
	"\227\006\023\377\206\073"
#define      msg1_z	42
#define      msg1	((&data[955]))
	"\311\057\067\002\073\130\304\154\220\171\067\231\174\335\217\202"
	"\005\030\337\022\137\115\366\264\120\174\015\005\267\065\054\057"
	"\321\321\302\174\372\334\106\154\334\277\337\064\346\304\257\320"
	"\075\164\202\372\122\102\320\044\013\021"
#define      date_z	1
#define      date	((&data[1006]))
	"\072"
#define      shll_z	8
#define      shll	((&data[1009]))
	"\316\173\226\067\057\314\115\166\350\066\036\047"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

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
