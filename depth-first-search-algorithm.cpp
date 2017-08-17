#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int vertex; // vertex / node of the graph
int edge; // edge / connection of the graph
vector<int>graph[100]; // graph to traverse

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

void displayGraph(){
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    // taking the number of node
    cin >> vertex;
    // taking the number of connection
    cin >> edge;
    //cout << vertex << " " << edge << endl;
    createGraph();
    displayGraph();
    return 0;
}
