//
//  ViewController.h
//  BLEMi
//
//  Created by jinkeke@techshino.com on 16/3/9.
//  Copyright © 2016年 www.techshino.com. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreBluetooth/CoreBluetooth.h>

#define kMI_STEP @"FF06"
#define kMI_BUTERY @"FF0C"
#define kMI_SHAKE @"2A06"
#define kMI_DEVICE @"FF01"

@interface ViewController : UIViewController<CBCentralManagerDelegate,CBPeripheralDelegate>
{
    CBCentralManager *theManager;
    CBPeripheral *thePerpher;
    CBCharacteristic *theSakeCC;
}

/**
 
 2016年3月13号周日活动莱芜和尚石-池步沟-林海草原-通天峡谷，【活动时间】2016年3月13号周日
 【活动地点】莱芜
 【活动强度】强度低，难度中，9公里左右
 【活动费用】40元
 【活动用餐】自备
 【交通】旅游空调大巴。【集合地点及时间】
 1、五院对面（路南）6:30
 2、省体北门公交站牌 6:40
 3、燕山立交桥东南角公交站牌 6:50
 4、（经十路）奥体西路115站牌7:00
 5，邢村立交桥过街天桥（路南）7:20
 6，孙村7:40
 报名小窗烦哥~
 
 **/

@end

