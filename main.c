#include "mlx/mlx.h"

int	main(void)
{
	int i =0;
	void	*mlx;
	void	*mlx_win;
		mlx = mlx_init();
		mlx_win = mlx_new_window(mlx, 1500, 1000, "FDF");

		mlx_new_image(mlx, 1920, 1080);
		// mlx_pixel_put(mlx,mlx_win,-100,-10,0x0000f);
		mlx_clear_window ( mlx, mlx_win );
		mlx_pixel_put(mlx,mlx_win,-100,-10,0x0000f);
		mlx_loop(mlx);

}