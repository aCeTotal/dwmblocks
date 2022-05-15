#define CMDLENGTH 100
#define DELIMITER "^c#D6DEEB^ | "

const Block blocks[] = {
	BLOCK("echo ^c#56B6C2^$(~/.config/dwmblocks/statusbar/sb-volume)",           0,    1)
	BLOCK("echo ^c#C678DD^$(~/.config/dwmblocks/statusbar/sb-disk)",             1,    2)
	BLOCK("echo ^c#D19A66^$(~/.config/dwmblocks/statusbar/sb-memory)",           1,    3)
	BLOCK("echo ^c#61AFEF^$(~/.config/dwmblocks/statusbar/sb-cpu) $(sb-temp)",   5,    4)
	BLOCK("echo ^c#98C379^$(~/.config/dwmblocks/statusbar/sb-kernel)",           5,    5)
	BLOCK("echo ^c#E06C75^$(~/.config/dwmblocks/statusbar/sb-clock)",            1,    6)
};
