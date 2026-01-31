def solution(operations):
    queue = []

    for o in operations:
        if o.split(' ')[0] == "I":
            queue.append(int(o.split(' ')[1]))
        elif o == "D -1":
            if len(queue) == 0:
                continue
            queue.remove(min(queue))
        elif o == "D 1":
            if len(queue) == 0:
                continue
            queue.remove(max(queue))
    if len(queue) == 0:
        return [0, 0]
    return [max(queue), min(queue)]
