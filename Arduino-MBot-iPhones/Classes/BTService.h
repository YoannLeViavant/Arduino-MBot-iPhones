//
//  BTService.h
//  Arduino_Servo
//
//  Created by Yoann Le Viavant
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

/* Services & Characteristics UUIDs */
#define kConnectedServiceUUID     [CBUUID UUIDWithString:@"FFF0"]
#define kConnectedDualServiceUUID [CBUUID UUIDWithString:@"FFE1"]
//================== TransmitMoudel =====================
// TransmitMoudel Receive Data Service UUID
#define kTransDataServiceUUID                    [CBUUID UUIDWithString:@"FFF0"]
#define kTransDataDualServiceUUID                [CBUUID UUIDWithString:@"FFE1"]
#define kDualResetServiceUUID           [CBUUID UUIDWithString:@"FFE4"]
// TransmitMoudel characteristics UUID
#define kTransDataCharateristicUUID         [CBUUID UUIDWithString:@"FFF1"]
#define kTransDataDualCharateristicUUID     [CBUUID UUIDWithString:@"FFE3"]
#define kNofityDataCharateristicUUID        [CBUUID UUIDWithString:@"FFF4"]
#define kNofityDataDualCharateristicUUID        [CBUUID UUIDWithString:@"FFE2"]

#define kDualResetCharateristicUUID         @"FFE5"

/* Notifications */
static NSString* const YLT_BLE_SERVICE_CHANGED_STATUS_NOTIFICATION = @"kBLEServiceChangedStatusNotification";
static NSString* const YLT_BLE_SERVICE_READ_STATUS_NOTIFICATION = @"kBLEServiceReadStatusNotification";


/* BTService */
@interface BTService : NSObject <CBPeripheralDelegate>

- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral;
- (void)reset;
- (void)startDiscoveringServices;

- (void)write:(NSData *)data;
- (void)read:(NSData *)data;

@end
