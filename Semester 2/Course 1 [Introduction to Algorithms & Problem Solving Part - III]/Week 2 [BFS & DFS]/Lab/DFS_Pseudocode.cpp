///Tree
void dfs(int node)
{
    cout<<node<<"\n";

    //Base Case
    if node does not have any chind:
            return
    // General case
    for all childs of node:
        dfs(child);
}

///Graph
//visited array

void dfs(int node)
{
    cout<<node<<"\n";

    visited[node] = 1;

    for all adj_node of node:
            if visited[adj_node] = 0:
                dfs(adj_node)
}
