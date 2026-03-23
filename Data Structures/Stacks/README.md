### 📚 Visualizing Stack Operations (LIFO)

This diagram visualizes how a vertical stack grows (PUSH) and shrinks (POP).

#### The Principle: PUSH from Bottom up, POP from Top down.

```mermaid
%%{init: {'theme': 'dark'}}%%
graph TD
    %% Define the stack elements
    subgraph STACK_LIFO ["STACK CONTAINER (Visualized LIFO Flow)"]
        direction BT
        
        %% Initial State (Empty)
        Empty["Stack is Empty<br/>(Top is -1 or NULL)"]:::state

        %% Push Operations (Showing the sequence)
        E1(("1. PUSH 10"))::::push --> |"Base"| Bottom["Data: 10<br/>(New Top)"]:::node
        E2(("2. PUSH 20"))::::push --> |"Over 10"| Middle["Data: 20<br/>(New Top)"]:::node
        E3(("3. PUSH 30"))::::push --> |"Over 20"| TopNode["Data: 30<br/>(Current TOP)"]:::node

        %% Create vertical sequence (BT means Bottom to Top)
        Bottom -.-> Middle -.-> TopNode
        
        %% Labeling the Current Top pointer
        TopPointer[["👉 TOP Points Here"]]::::pointer -.- TopNode
    end

    %% Pop Operation (Visualized departure)
    E4(("4. POP"))::::pop --> |"Remove 30"| Depart["30 (Popped Data)"]:::depart

    %% Connecting Pop logic
    TopNode -.-> Depart

    %% --- STYLING ---
    %% Define styles
    classDef node fill:#1f6feb,stroke:#58a6ff,stroke-width:2px,rx:10,ry:10;
    classDef state fill:#333,stroke:#6e7681,stroke-width:1px,stroke-dasharray: 5 5;
    classDef push fill:#238636,stroke:#3fb950,stroke-width:2px,shape:circle;
    classDef pop fill:#da3633,stroke:#f85149,stroke-width:2px,shape:circle;
    classDef pointer fill:#f0883e,stroke:#f1ae7b,stroke-width:1px,shape:rect,stroke-dasharray: 5 5;
    classDef depart fill:#d29922,stroke:#d1be46,stroke-width:3px,shape:circle;
