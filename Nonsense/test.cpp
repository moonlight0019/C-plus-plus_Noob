#include <iostream>
#include <vsifconfig.h>
#include <vsifsdk.h>

void testPTZLibrary() {
    // 初始化云台能力集信息
    CFG_PTZ_PROTOCOL_CAPS_INFO ptzCapabilities;
    ptzCapabilities.nStructSize = sizeof(CFG_PTZ_PROTOCOL_CAPS_INFO);

    // 设置云台的一些基本能力信息
    ptzCapabilities.bPan = TRUE;
    ptzCapabilities.bTile = TRUE;
    ptzCapabilities.bZoom = TRUE;

    // 设置云台的转动角度范围
    ptzCapabilities.stuPtzMotionRange.nHorizontalAngleMin = -90;
    ptzCapabilities.stuPtzMotionRange.nHorizontalAngleMax = 90;
    ptzCapabilities.stuPtzMotionRange.nVerticalAngleMin = -45;
    ptzCapabilities.stuPtzMotionRange.nVerticalAngleMax = 45;

    // 打印云台的能力集信息来检查初始化是否成功
    std::cout << "Cloud PTZ Capabilities Test:" << std::endl;
    std::cout << "Support Pan: " << (ptzCapabilities.bPan ? "Yes" : "No") << std::endl;
    std::cout << "Support Tile: " << (ptzCapabilities.bTile ? "Yes" : "No") << std::endl;
    std::cout << "Support Zoom: " << (ptzCapabilities.bZoom ? "Yes" : "No") << std::endl;
    std::cout << "Horizontal Angle Range: [" 
              << ptzCapabilities.stuPtzMotionRange.nHorizontalAngleMin << ", "
              << ptzCapabilities.stuPtzMotionRange.nHorizontalAngleMax << "]" << std::endl;
    std::cout << "Vertical Angle Range: [" 
              << ptzCapabilities.stuPtzMotionRange.nVerticalAngleMin << ", "
              << ptzCapabilities.stuPtzMotionRange.nVerticalAngleMax << "]" << std::endl;
}

int main() {
    // 测试
    testPTZLibrary();
    return 0;
}

