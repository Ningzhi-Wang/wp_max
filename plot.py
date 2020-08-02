import numpy as np
import matplotlib.pyplot as plt

def plot_at_receivers(r, nx, time, bounds):
    """
    Plot displacement as receiver over time time
    Args:
        r (2d array): Wave pressure values at receiver depth over given time
        nx (int): the number of cells in horizontal direction of the model
        time (float): Time legth
        bounds (float): The maximum absolute value for pressure for plotting
    """
    plt.figure(figsize=(10,7))
    plt.imshow(r.T, cmap='RdBu', interpolation='bilinear', aspect='auto',
               vmin=-bounds, vmax=bounds,   # set bounds for colourmap data
               extent=(0,nx,time,0))  # set bounds for axes
    plt.title('Receiver Data')
    plt.colorbar()
    plt.xlabel('Receiver number')
    plt.ylabel('Time / s')
    plt.savefig("./fpga.png")
    plt.show()

if __name__ == "__main__":
    result = np.fromfile("./wave-propagation-CPU/fpga.csv", dtype=np.float32).reshape(3333, -1)
    plot_at_receivers(result.T, 501, 2.00, 0.04)
