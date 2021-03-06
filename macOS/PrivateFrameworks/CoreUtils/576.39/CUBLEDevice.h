//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CUBLEDevice : NSObject
{
    unsigned char _nearbyActivityLevel;
    unsigned short _proximityPairingProductID;
    unsigned int _lgFlags;
    int _nearbyActionType;
    unsigned int _nearbyFlags;
    int _objectDiscoveryAlarmState;
    int _objectDiscoveryBatteryState;
    int _objectDiscoveryMode;
    int _proximityPairingSubType;
    int _rawRSSI;
    NSData *_addressData;
    NSData *_appleManufacturerData;
    NSString *_identifier;
    NSData *_lgDeviceID;
    NSData *_manufacturerData;
    NSData *_nearbyAuthTag;
    NSData *_objectDiscoveryNearOwnerID;
    NSData *_objectDiscoveryPublicKeyData;
}

@property(nonatomic) int rawRSSI; // @synthesize rawRSSI=_rawRSSI;
@property(readonly, nonatomic) int proximityPairingSubType; // @synthesize proximityPairingSubType=_proximityPairingSubType;
@property(readonly, nonatomic) unsigned short proximityPairingProductID; // @synthesize proximityPairingProductID=_proximityPairingProductID;
@property(copy, nonatomic) NSData *objectDiscoveryPublicKeyData; // @synthesize objectDiscoveryPublicKeyData=_objectDiscoveryPublicKeyData;
@property(copy, nonatomic) NSData *objectDiscoveryNearOwnerID; // @synthesize objectDiscoveryNearOwnerID=_objectDiscoveryNearOwnerID;
@property(nonatomic) int objectDiscoveryMode; // @synthesize objectDiscoveryMode=_objectDiscoveryMode;
@property(nonatomic) int objectDiscoveryBatteryState; // @synthesize objectDiscoveryBatteryState=_objectDiscoveryBatteryState;
@property(nonatomic) int objectDiscoveryAlarmState; // @synthesize objectDiscoveryAlarmState=_objectDiscoveryAlarmState;
@property(nonatomic) unsigned int nearbyFlags; // @synthesize nearbyFlags=_nearbyFlags;
@property(copy, nonatomic) NSData *nearbyAuthTag; // @synthesize nearbyAuthTag=_nearbyAuthTag;
@property(readonly, nonatomic) int nearbyActionType; // @synthesize nearbyActionType=_nearbyActionType;
@property(nonatomic) unsigned char nearbyActivityLevel; // @synthesize nearbyActivityLevel=_nearbyActivityLevel;
@property(copy, nonatomic) NSData *manufacturerData; // @synthesize manufacturerData=_manufacturerData;
@property(readonly, nonatomic) unsigned int lgFlags; // @synthesize lgFlags=_lgFlags;
@property(readonly, copy, nonatomic) NSData *lgDeviceID; // @synthesize lgDeviceID=_lgDeviceID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSData *appleManufacturerData; // @synthesize appleManufacturerData=_appleManufacturerData;
@property(copy, nonatomic) NSData *addressData; // @synthesize addressData=_addressData;
- (void).cxx_destruct;
- (void)_parseLGManufacturerPtr:(const char *)arg1 end:(const char *)arg2 fields:(id)arg3;
- (void)_parseAppleProximityPairingPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseAppleObjectDiscoveryPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseAppleNearbyInfoPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseAppleNearbyActionPtr:(const char *)arg1 end:(const char *)arg2;
- (void)_parseAppleManufacturerPtr:(const char *)arg1 end:(const char *)arg2 data:(id)arg3;
- (void)_parseManufacturerData:(id)arg1 advertisementFields:(id)arg2;
- (unsigned int)updateWithAdvertisementData:(id)arg1 rssi:(int)arg2 oldDevice:(id)arg3;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;

@end

