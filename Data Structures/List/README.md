```mermaid
graph LR
    subgraph Memory_Heap
        Node1["Node A<br/>Data: 10<br/>Next: 0x0A2"] --> Node2["Node B<br/>Data: 20<br/>Next: 0x0B5"]
        Node2 --> Node3["Node C<br/>Data: 30<br/>Next: NULL"]
    end
    
    Head((Head Pointer)) -.-> Node1
    style Node3 fill:#f96,stroke:#333,stroke-width:2px
