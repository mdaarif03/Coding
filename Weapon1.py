import math

def is_triangular(num):
    # Function to check if a number is a triangular number
    # A number is triangular if 8 * num + 1 is a perfect square
    x = int(math.sqrt(8 * num + 1))
    return x * x == 8 * num + 1

def calculate_payment(weights):
    n = len(weights)
    
    # Function to calculate the sum of non-triangular weights in a given sequence
    def sum_non_triangular(sequence):
        return sum(weight for weight in sequence if not is_triangular(weight))
    
    # Main simulation
    cycles = 0
    while True:
        for i in range(0, n, N):
            # Select N boxes in each cycle
            selected_boxes = weights[i:i+N]
            
            # Compare and shift boxes
            min_box = min(selected_boxes[:2])
            max_box = max(selected_boxes[:2])
            shifted_boxes = [min_box] + selected_boxes[2:] + [max_box]
            
            # Check if the selected box remained un-shifted
            if min_box == selected_boxes[0]:
                cycles += 1
            else:
                cycles = 0
            
            # Update the weights list
            weights[i:i+N] = shifted_boxes
        
        # Check if the process should halt
        if cycles == K:
            break
    
    # Calculate and print the total amount of money to be paid
    total_payment = sum_non_triangular(weights)
    print(total_payment)

# Example usage
weights = [7, 3, 6, 9, 10, 2, 4, 11, 5, 12, 17, 1]
N, K = 3, 2
calculate_payment(weights, N, K)
