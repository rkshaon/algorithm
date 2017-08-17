#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int vertex; // vertex / node of the graph
int edge; // edge / connection of the graph
vector<int>sequence;
int startingNode; // starting node to traverse the graph
vector<int>graph[100]; // graph to traverse
bool visited[100] = {false}; // checking the node has been visited or not

void inputGraphData(int a, int b){
    graph[a].push_back(b);
}

void createGraph(){
    int a; // source
    int b; // destination
    while(edge--){
        cin >> a >> b;
        inputGraphData(a, b);
    }
}

void dfs(int startingNode){
    if(!visited[startingNode-1]){
        visited[startingNode-1]=true;
        sequence.push_back(startingNode);
        for(int i=0; i<graph[startingNode-1].size(); i++){
            //cout << graph[startingNode-1][i] << endl;
            if(!visited[graph[startingNode-1][i]]){
                //dfs(graph[startNode-1][i]);
                cout << i << endl;
                //cout << "working" << graph[startingNode-1][0] << endl;
            }
        }
    }
    else return;
}

void displaySequence(){
    for(int i=0; i<sequence.size(); i++){
        cout << sequence[i] << endl;
    }
}

void displayGraph(){
    for(int i=0; i<vertex; i++){
        for(int j=0; j<graph[i].size(); j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> vertex; // taking the number of node
    cin >> edge; // taking the number of connection
    createGraph();
    //displayGraph(); // just for checking that 2d vector is working
    //cin >> startingNode;
    dfs(1);
    //cout << sequence.size() << endl;
    //displaySequence();
    //for(int i=0; i<vertex; i++) cout << visited[i] << endl;
    return 0;
}
