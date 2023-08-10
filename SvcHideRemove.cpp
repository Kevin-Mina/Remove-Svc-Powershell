#include <cstdlib>

int main() {
    system("powershell.exe -Command \"& { & $env:SystemRoot\\System32\\sc.exe sdset WinHttpSvc \\\"D:(A;;CCLCSWRPWPDTLOCRRC;;;SY)(A;;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;BA)(A;;CCLCSWLOCRRC;;;IU)(A;;CCLCSWLOCRRC;;;SU)S:(AU;FA;CCDCLCSWRPWPDTLOCRSDRCWDWO;;;WD)\\\" }\"");
    return 0;
}
