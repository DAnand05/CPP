#define ff first
#define ss second
#define ref(i,a,b) for(int i = a;i < b; i++)
#define fer(i,a,b) for(int i = a; i > b; i--)
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define pqi priority_queue<int>
#define pqg priority_queue<int, vi, greater<int>>

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
/*
template<typename T>
class Node{
public:
    T data;
    Node *next;

    Node(T data){
        this->data = data;
        next = NULL;
    }
};

Node<int>* takeInput(Node<int> *head){
    Node<int> *tail = NULL;
    int data;
    cin>>data;
    while(data != -1){
        Node<int> *newNode = new Node<int>(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(Node<int> *head){
    Node<int> *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
*/

/*void merge(int *arr, int si, int mid, int ei){
    int *output = new int[ei+1];
    int i = si, j = mid+1, k = 0;
    while(i<= mid && j <= ei){
        if(arr[i] <= arr[j]){
            output[k] = arr[i];
            i++,k++;
        }else if(arr[j]<arr[i]){
            output[k] = arr[j];
            j++,k++;
        }
    }
    while(i<= mid){
        output[k] = arr[i];
        i++,k++;
    }
    while(j<=ei){
        output[k] = arr[j];
        j++,k++;
    }
    int l = 0;
    for(int m = si;m<=ei;m++){
        arr[m] = output[l];
        l++;
    }
    delete[] output;
}

void mergeSort(int *arr, int si, int ei){

    if(si >= ei){
        return;
    }

    int mid = (si+ei)/2;
    mergeSort(arr, si,mid);
    mergeSort(arr, mid+1, ei);
    merge(arr, si, mid, ei);
}

void mergeSort(int *arr, int n){
    mergeSort(arr,0,n-1);
}
*/

int main(){
    /*
        int n;
    cin>>n;
    vector<vector<vector<vector<int>>>> arr;
    ref(i,0,n){
        vector<vector<vector<int>>> a;
        ref(j,0,n){
            vector<vector<int>> v;
            ref(k,0,n){
                vector<int> temp(n,0);
                v.push_back(temp);
            }
            a.push_back(v);
        }
        arr.push_back(a);
    }

    ref(i,0,n){
        ref(j,0,n){
            ref(k,0,n){
                ref(l,0,n){
                    cout<<arr[i][j][k][l]<<" ";
                }
                cout<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }*/
    int t;
    cin>>t;
    while(t--){
        int al,bo;
        cin>>al>>bo;
        int n = al+bo;
        int count = 2;
        bool div = false;
        while(count<n){
            if(n%count == 0){
                div = true;
                break;
            }
            count++;
        }
        if(div==false){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }

        /*Node<int>* head = NULL;
        head = takeInput(head);
        print(head);*/
}
