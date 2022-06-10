#include <bits/stdc++.h>
#define MAX 12
#define INF 1000
#define REP(i,a,n) for(int i = a; i<n; i++)
#define s second
#define f first
#define e empty()
#define p push
#define fr front()
#define pp pop()

using namespace std;
typedef pair<int,int> ii;

struct state
{
    ii cA;
    ii cB;
    ii cC;
    int val;

    state(ii nA,ii nB, ii nC, int nVal){
        cA = nA;
        cB = nB;
        cC = nC;
        val = nVal;
    }

    state(){

    }

};

typedef queue<state> qii;

char mat[MAX][MAX];
bool res[MAX][MAX][MAX][MAX][MAX][MAX];
int resp,n;
int di [] = {-1,1,0,0};
int dj [] = {0,0,-1,1};
ii A,B,C;

bool can(ii p)
{
    if(p.f>=0 && p.f<n && p.s>=0 && p.s<n)
        return  mat[p.f][p.s]!='#';

    return false;
}

bool isEnd(state pe)
{
    return mat[pe.cA.f][pe.cA.s]=='X' && mat[pe.cB.f][pe.cB.s]=='X' && mat[pe.cC.f][pe.cC.s]=='X';
}

bool notSame(ii p1, ii p2, ii p3)
{
    return !(p1==p2 || p2==p3 || p1==p3);
}

bool validar(state st)
{
    if(!res[st.cA.f][st.cA.s][st.cB.f][st.cB.s][st.cC.f][st.cC.s] && notSame(st.cA,st.cB,st.cC))
        return res[st.cA.f][st.cA.s][st.cB.f][st.cB.s][st.cC.f][st.cC.s] = true;
    return false;
}

void bfs()
{
    char con;
    qii cola;
    state curr,enc;
    curr = state(A,B,C,0);
    res[A.f][A.s][B.f][B.s][C.f][C.s]=true;
    cola.p(curr);
    ii nA,nB,nC;
    bool canA,canB,canC;
    while(!cola.e)
    {
        curr = cola.fr;
        cola.pp;
        if(isEnd(curr)) resp = min(resp,curr.val);
        REP(c,0,4){
            nA.f = curr.cA.f + di[c]; nA.s = curr.cA.s + dj[c];
            nB.f = curr.cB.f + di[c]; nB.s = curr.cB.s + dj[c];
            nC.f = curr.cC.f + di[c]; nC.s = curr.cC.s + dj[c];
            canA = can(nA);
            canB = can(nB);
            canC = can(nC);
            if(canA || canB || canC)
            {
                if(canA){
                    if(!canB && !canC && nA != curr.cB && nA != curr.cC) enc.cA = nA;
                    else if(canB && !canC && nA != curr.cC) enc.cA = nA;
                    else if(canC && !canB && nA != curr.cB) enc.cA = nA;
                    else if(canB && canC) enc.cA = nA;
                    else enc.cA = curr.cA;
                }
                else enc.cA = curr.cA;

                if(canB){
                    if(!canA && !canC && nB != curr.cA && nB != curr.cC) enc.cB = nB;
                    else if(canA && !canC && nB != curr.cC) enc.cB = nB;
                    else if(canC && !canA && nB != curr.cA) enc.cB = nB;
                    else if(canA && canC) enc.cB = nB;
                    else enc.cB = curr.cB;
                }
                else enc.cB = curr.cB;

                if(canC){
                    if(!canA && !canB && nC != curr.cB && nC != curr.cA) enc.cC = nC;
                    else if(canA && !canB && nC != curr.cB) enc.cC = nC;
                    else if(canB && !canA && nC != curr.cA) enc.cC = nC;
                    else if(canA && canB) enc.cC = nC;
                    else enc.cC = curr.cC;
                }
                else enc.cC = curr.cC;

                enc.val = curr.val + 1;
                if(validar(enc)) cola.push(enc);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int c=0,casos;
    char aux;

    cin >> casos;

    while(c<casos)
    {

        resp = INF;
        cout << "Case "<< ++c <<": ";
        cin >> n;
        memset(res,0,sizeof res);

        REP(i,0,n)
        {
            REP(j,0,n)
            {
                cin >> aux;
                mat[i][j]=aux;
                if(aux == 'A')
                    A = ii(i,j);
                if(aux == 'B')
                    B = ii(i,j);
                if(aux == 'C')
                    C = ii(i,j);
            }
        }

        bfs();
        if (resp!=INF)
            cout << resp << "\n";
        else
            cout << "trapped\n";
    }

    return 0;
}