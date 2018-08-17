## Sprint Challenge Questions:

1. Name at least three things that a general-purpose Operating System is responsible for handling.

a. An Operating System handles or manages a CPU's resources, such as its memory. It allocates and/or deallocates memory space for programs.

b. It creates and manipulates the operations of processes with system calls.

c. It schedules the execution of processes and makes use of algorithms, like the Multi-Level Feedback Queue (MLFQ), to make better scheduling decisions. 

2. Describe the job of the Scheduler in the OS in general.

The job of a Scheduler is just that -- to schedule the execution of processes. Hundreds of processes may vie for the Operating System's attention simultaneously, and the Scheduler's task is to arrange the order in which the processes will run (i.e., which process will go first, which one will go second, and so on, until all of the processes are executed). In order to decide which process to execute first, the Scheduler makes use of algorithms. Examples of common algorithms that Schedulers use are queues or First-In-First-Out (FIFO), Shortest Job First, Round Robin, and Multi-Level Feedback Queues (MLFQ). The Scheduler utilizes criteria or performance metrics for choosing the best algorithm, and examples of these are turnaround time, response time, and fairness. The algorithm which meets all three criteria is the best algorithm for scheduling. Queues/FIFO, Shortest Job First, and Round Robin have their advantages, but the best algorithm is the Multi-Level Feedback Queue because it meets the criteria and it combines the benefits of a Queue and a Round Robin.  

3. Describe the benefits of the MLFQ over a plain Round-Robin scheduler.

The way a Multi-Level Feedback Queue works is this: it "reads" or "learns" the characteristics or behavior of every process before scheduling it. If the process behaves like a blocking process, for example, it enqueues it in the blocking queue and allocates relatively smaller CPU time for it. If the process behaves like a normally running/ non-blocking process, then it enqueues it in the lower-level CPU queues and allocates relatively bigger CPU time for it. In other words, the time which an MLFQ algorithm will allocate a process will vary or depend on the latter's behavior, so not all processes will have the same time allocation. That's an efficient use of the CPU's resources. The drawback with a Round Robin algorithm is that it doesn't "read" the characteristics of a process, so it allocates the same amount of time for all processes. That's a relatively inefficient use of the CPU's resources. Hence, the MLFQ is the best algorithm for scheduling. 

