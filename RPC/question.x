struct qns_input{
char ans[20];
};

struct qns_output{
int rank;
int score;
char qsn[200];
char message[100];
};
struct clnt
{
	int address;
	char ans[15];
	int score;
	int index; 
	int rank;
};
program QNS_PROG{
	version QNS_VER{
		qns_output qns_probe(qns_input)=1;
		qns_output qns_checkanswer(qns_input)=2;
		qns_output qns_getscore(qns_input)=3;
		qns_output qns_getrank(qns_input)=4;
		qns_output qns_exit(qns_input)=5;
		}=1;
}=0x13451111;
